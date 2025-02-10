#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    char c;
    cin>>a>>c;
    for(int i=1;i<=a*2-1;i++)
    {
        for(int j=0;j<abs(i-a);j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(a-abs(a-i))*2-1;j++)
        {
            cout<<c;
        }
    cout<<endl;
    }
}