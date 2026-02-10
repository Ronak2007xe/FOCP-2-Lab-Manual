#include <iostream>
using namespace std;

class SymbolCheck {
    char ch;

public:
    void getInput() {
        cout << "Enter a character: ";
        cin >> ch;
    }

    void classify() {
        if (ch >= '0' && ch <= '9') {
            cout << "It is a Number";
        }
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "It is a Vowel";
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            cout << "It is a Consonant";
        }
        else {
            cout << "It is a Special Character";
        }
    }
};

int main() {
    SymbolCheck s;   // object creation
    s.getInput();
    s.classify();

    return 0;
}
