#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;
    for (int n = 0; n < rows; ++n) {
        for (int space = 0; space < rows - n; ++space) {
            cout << " ";
        }
        
        for (int k = 0; k <= n; ++k) {
            int factn = 1, factk = 1, factkn = 1,value = 1;
            for (int i = 1; i <= n; ++i) factn *= i;
            for (int i = 1; i <= k; ++i) factk *= i;
            for (int i = 1; i <= (n - k); ++i) factkn *= i;
            value = factn / (factk * factkn);
            cout << value << " ";   
        }
        cout << endl;
    }

    return 0;
}