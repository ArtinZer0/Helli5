#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= (2 * n - 1); i++) {
        for (int j = 1; j <= (2 * n - 1); j++) {
            int topDistance = i -1;                    
            int bottomDistance = (2 * n - 1) - i;      
            int leftDistance = j - 1;               
            int rightDistance = (2 * n - 1) - j;      
            
            if(topDistance<=bottomDistance and topDistance<=leftDistance and topDistance<=rightDistance)
            {
            cout << n - topDistance << " ";
            }
            else if(bottomDistance<=topDistance and bottomDistance<=leftDistance and bottomDistance<=rightDistance)
            {
            cout << n - bottomDistance << " ";
            }
            else if(rightDistance<=bottomDistance and rightDistance<=leftDistance and rightDistance<=topDistance)
            {
            cout << n - rightDistance << " ";
            }
            else
            {
            cout << n - leftDistance << " ";
            }
        }
        cout << endl;
    }

    return 0;
}