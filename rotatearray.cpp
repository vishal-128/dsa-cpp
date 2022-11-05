// rotated array
#include<iostream>
using namespace std;
int main()
{
    int a[4]={10,20,30,40};
    int k=3,n=4;
    int b[4],temp,x;
    for(int i=0;i<n;i++)
    {
        
      if ((i+k)<4)
      {
        x=i+k;
        temp=a[i];
        b[x]=temp;
      } 
      else
      {
        x=(i+k)-4;
        temp=a[i];
        b[x]=temp;

      }
    }
    for(int j=0;j<n;j++)
    {
        cout<<b[j]<<endl;
    }
    
}