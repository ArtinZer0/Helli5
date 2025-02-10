#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  char a[n];
  for (int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(int(a[i])>int(a[j])){
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
          }
        }
    }
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}