#include <iostream>
using namespace std;

int main() {
    float c, a;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    a = (9.0/5.0) * c + 32;
    
    cout << "The temperature in Fahrenheit is: " << a;
    return 0;
}

