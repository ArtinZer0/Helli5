#include <iostream>
using namespace std;

int main() 
{
    int n;
    char c;
    cin>>n;
    cin>>c;
    for (int i=1;i<=n;i++)
    {
      for (int a=i;(2*n-2)/2>=a;a++)
      {
        cout<<" ";
      }
      for (int b=1;b<=2*i-1;b++)
      {
        cout<<c;
      }
      cout<<endl;
    }
}