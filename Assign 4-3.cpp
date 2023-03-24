#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num, prime_count = 0, composite_count = 0;
    char choice = 'y';
    
    while (choice == 'y') {
        cout << "Enter a number: ";
        cin >> num;
        
        if (isPrime(num)) {
            prime_count++;
        } else {
            composite_count++;
        }
        
        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;
    }
    
    cout << "Total prime numbers entered: " << prime_count << endl;
    cout << "Total composite numbers entered: " << composite_count << endl;
    
    return 0;
}
