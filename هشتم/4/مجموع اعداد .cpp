#include <iostream>
using namespace std;
int main() 
{
  int a[100];
  for(int i=0;i<100;i++)
  {
    cin>>a[i];
    if(a[i]==0)
      break;
  }
  int S=0;
  for(int i=0;i<100;i++)
  {
    S+=a[i];
    if(a[i]==0)
      break;
  }
  cout<<S;
}