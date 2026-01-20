#include <iostream>
using namespace std;

int main() {
    int itemNo, qty;
    float unitPrice, amount, discount, netAmount;

    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Quantity: ";
    cin >> qty;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    amount = qty * unitPrice;        // total cost before discount
    discount = amount * 0.20;        // 20% discount
    netAmount = amount - discount;   // final bill
    cout<<"------------Bill Details-----------------";
    cout << "\nItem Number: " << itemNo << endl;
    cout << "Amount Before Discount: " << amount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Net Amount to Pay: " << netAmount << endl;

    return 0;
}

