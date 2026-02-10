#include <iostream>
using namespace std;

class LeapYear {
    int year;

public:
    void getYear() {
        cout << "Enter a year: ";
        cin >> year;
    }

    void checkLeapYear() {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            cout << year << " is a Leap Year";
        else
            cout << year << " is not a Leap Year";
    }
};

int main() {
    LeapYear ly;   // object creation
    ly.getYear();
    ly.checkLeapYear();

    return 0;
}
