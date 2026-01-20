#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first number: ";
    cin >> a ;
    cout << "Enter secomd number: ";
    cin >> b ;

    cout << "\nOriginal Values: a = " << a << ", b = " << b << endl;

    // Method 1: Using Temporary Variable
    temp = a;
    a = b;
    b = temp;
    cout << "After Temp Swap: a = " << a << ", b = " << b << endl;

    return 0;
}
