#include <iostream>
using namespace std;

class Marks {
private:
    float s1, s2, s3; 

public:
 
    void input() {
        cout << "Enter marks of student 1: ";
        cin >> s1;
        cout << "Enter marks of student 2: ";
        cin >> s2;
        cout << "Enter marks of student 3: ";
        cin >> s3;
    }

    void displayAverage() {
        float avg = (s1 + s2 + s3) / 3;
        cout << "Average marks = " << avg << endl;
    }
};

int main() {
    Marks m; 
    m.input();
    m.displayAverage();
    return 0;
}
