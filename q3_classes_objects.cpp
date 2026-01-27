#include <iostream>
using namespace std;

class Temperature
{
private:
    float temp;

public:
    void fToC()
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        float c = (temp - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius = " << c << endl;
    }

    void cToF()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        float f = (temp * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit = " << f << endl;
    }
};

int main()
{
    Temperature t;
    int choice;

    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
        t.fToC();
    else if (choice == 2)
        t.cToF();
    else
        cout << "Invalid choice" << endl;

    return 0;
}
