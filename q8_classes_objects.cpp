#include <iostream>
using namespace std;

class Monitor {
    int n;

public:
    void getData() {
        cout << "Enter value of N: ";
        cin >> n;
    }

    void generateEvents() {
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                cout << i << " : Buzz Fuzz" << endl;
            else if (i % 3 == 0)
                cout << i << " : Buzz" << endl;
            else if (i % 5 == 0)
                cout << i << " : Fuzz" << endl;
            else
                cout << i << endl;
        }
    }
};

int main() {
    Monitor m;   // object creation
    m.getData();
    m.generateEvents();

    return 0;
}
