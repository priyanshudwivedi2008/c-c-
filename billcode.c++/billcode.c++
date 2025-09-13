#include <iostream>
#include <iomanip>
using namespace std;

#define GST_RATE 0.18

int main() {
    string itemName;
    int quantity;
    float unitPrice, subtotal, gst, total;

    cout << "Enter item name: ";
    cin >> itemName;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter unit price: ";
    cin >> unitPrice;

    subtotal = quantity * unitPrice;
    gst = subtotal * GST_RATE;
    total = subtotal + gst;

    cout << fixed << setprecision(2);
    cout << "\n--- BILL ---\n";
    cout << "Item: " << itemName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Unit Price: " << unitPrice << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "GST @18%: " << gst << endl;
    cout << "Total Amount: " << total << endl;

    return 0;
}
