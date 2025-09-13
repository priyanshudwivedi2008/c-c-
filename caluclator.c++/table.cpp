#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    cout << "\nMultiplication Table:\n\n";
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}