#include <iostream>
using namespace std;
int main() 
{
  int a[20];
  for (int i=0;i<20;i++)
  {
    cin>>a[i];
  }
  int b[20];
  for(int i=0;i<20;i++)
  {
    b[i]=a[19-i];
  }
  for(int i=0;i<20;i++)
  {
    cout<<b[i]<<" ";
  }
}