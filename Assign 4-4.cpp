#include <iostream>

using namespace std;

bool isValidUsername(string username) {
    int len = username.length();
    if (len < 6 || len > 20) {
        return false;
    }
    for (int i = 0; i < len; i++) {
        if (!isalnum(username[i]) && username[i] != '_') {
            return false;
        }
    }
    return true;
}

int main() {
    string username;
    cout << "Enter a username: ";
    cin >> username;
    
    if (isValidUsername(username)) {
        cout << "Valid username!" << endl;
    } else {
        cout << "Invalid username!" << endl;
    }
    
    return 0;
}

