#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n;i++) 
    {
        for (int j=0; j <=n-i-1; j++)
        {
            cout<<" ";
        }
        for (int z=1; z<=i; z++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}