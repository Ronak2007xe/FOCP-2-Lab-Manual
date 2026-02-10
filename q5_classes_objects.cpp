#include <iostream>
using namespace std;

class Swap {
    int a, b;

public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void swapNumbers() {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << "After swapping:\n";
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    Swap obj;   // object creation
    obj.getData();
    obj.swapNumbers();
    obj.display();

    return 0;
}
