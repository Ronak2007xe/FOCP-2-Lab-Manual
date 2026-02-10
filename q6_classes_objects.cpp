#include <iostream>
using namespace std;

class Employee {
    float basicSalary, bonus, netSalary;

public:
    void calculateSalary() {
        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = basicSalary * 0.12;   // 12% bonus
        netSalary = basicSalary + bonus;

        cout << "Bonus (12%) = " << bonus << endl;
        cout << "Net Salary = " << netSalary << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp;   // object creation

    for (int i = 1; i <= n; i++) {
        cout << "\nEmployee " << i << endl;
        emp.calculateSalary();
    }

    return 0;
}
