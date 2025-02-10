#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  char a[n];
  int z[n];
  for (int i=0;i<n;i++)
    cin>>a[i];
  for (int i=0;i<n;i++)
  {
    if(a[i]>90){
      z[i]=int(a[i]-96);
    }
    else{
      z[i]=int(a[i]-64);
    }
  }
  for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {   
          int ui,uj;
             if(a[i]>90){
                ui=int(a[i]-96);
             }
             else if (a[i]<=90){
               ui=int(a[i]-64);
             }
             if(a[j]>90){
                uj=int(a[j]-96);
             }
             else if (a[j]<=90){
               uj=int(a[j]-64);
             }
             if(ui>uj){
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
             }
             else if(ui==uj and int(a[j])<=90){
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
             }
        }
    }
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}