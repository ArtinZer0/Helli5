#include <iostream>
using namespace std;
int main() 
{
  int a[10];
  for (int i=0;i<10;i++)
  {
    cin>>a[i];
  }
  int b[10],c[10];
  for(int i=0;i<10;i++)
  {
    cin>>b[i];
  }
  int x=0;
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
    {
      if(a[i]==b[j])
      {
        c[x]=a[i];
        x++;
      }
    }
  }
  for(int i=0;i<x;i++)
  {
    cout<<c[i]<<" ";
  }
  
}