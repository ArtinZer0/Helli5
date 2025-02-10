#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  for ( int i=1;n>=i;i++)
  {
    for (int a=n-i,j=1;a>=j;j++)
    {
      cout<<" ";
    }
    for (int b=1;b<=i;b++)
    {
      if (b!=i)
      {
        
        cout<<b<<" ";
      }
      else
      {
        cout<<b;
      }
    }
    cout<<endl;
  }
}