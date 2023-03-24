CODE FOR PRINT SQUARE STAR:
#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}


CODE FOR RECTANGLE:

#include <iostream>

using namespace std;

int main() {
    int width, height;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "$ ";
        }
        cout << endl;
    }
    
    return 0;
}
