#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  float arr[n];
  for (int i=0;i<n;i++)
    cin>>arr[i];
  for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
              // swap(arr[i],arr[j]);
              float temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
                
            }
        }
    }
  int gumba=0;
  float f[n];
  int count=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      bool t=true;
      for(int o=0;o<n;o++)
      {
        if(arr[i]==f[0]){
          t=false;
        }
      }
      if(arr[i]==arr[j] and t)
      {
        gumba+=1;
        cout<<arr[i]<<":"<<i<<endl;
        f[count]=arr[i];
        count++;
      }
    }
  }
  if (gumba==0){
    cout<<"Gumba Gumba";
  }
}