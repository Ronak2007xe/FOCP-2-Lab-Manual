#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    void input() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    
    void displayArea() {
        float area = 3.14 * radius * radius;
        cout << "Area of the circle = " << area << endl;
    }
};

int main() {
    Circle c;  
    c.input();
    c.displayArea();

    return 0;
}
