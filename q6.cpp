#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        float basic, bonus, net_salary;

        cout << "\nEmployee " << i << endl;
        cout << "Enter basic salary: ";
        cin >> basic;

        bonus = basic * 0.12;       
        net_salary = basic + bonus;

        cout << "Bonus: " << bonus << endl;
        cout << "Net Salary: " << net_salary << endl;
    }

    return 0;
}
