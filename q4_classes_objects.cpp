#include <iostream>
using namespace std;

class Bill {
private:
    int itemNo, quantity;
    float price, amount, discount, netAmount;

public:
    void input() {
        cout << "Enter Item Number: ";
        cin >> itemNo;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Unit Price: ";
        cin >> price;
    }

    void calculate() {
        amount = quantity * price;
        discount = amount * 0.20;  
        netAmount = amount - discount;
    }

    void display() {
        cout << "\n----- BILL DETAILS -----\n";
        cout << "Item No: " << itemNo << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: " << price << endl;
        cout << "Total Amount: " << amount << endl;
        cout << "Discount (20%): " << discount << endl;
        cout << "Net Amount to Pay: " << netAmount << endl;
    }
};

int main() {
    Bill b; 
    b.input();
    b.calculate();
    b.display();
    return 0;
}
