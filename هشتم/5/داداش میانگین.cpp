#include <iostream>
// #include <math.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  float a[n];
  for (int i=0;i<n;i++)
    cin>>a[i];
  float s=0;
  for (int i=0;i<n;i++)
    s+=a[i];
  // cout<<s<<endl;
  float m=s/n;
  float y=abs(a[0]-m);
  float z=a[0];
  for (int i=0;i<n;i++)
  {
    float x=abs(a[i]-m);
    if (y>=x)
    {
      if (x<y){
        y=x;
        z=a[i];
      }
      else if (x>y)
      {
        y=x;
        z=a[i];
      }
    }
  }
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
            float temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
      }
  }
  cout<<z<<endl;
  // for(int i=0;i<n;i++){
  //   cout<<a[i];
  // }
  // cout<<endl;
  for (int i=0;i<n;i++)
  {
    if (a[i]==z){
      cout<<i;
      break;
    }
  }
}