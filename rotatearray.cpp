// rotated array
#include<iostream>
using namespace std;
int main()
{
    int a[8]={10,20,30,40,50,60,70,80};
    int k=3,n=8;
    int b[8],temp,x;
    for(int i=0;i<n;i++)
    {
        
      if ((i+k)<n)
      {
        x=i+k;
        temp=a[i];
        b[x]=temp;
      } 
      else
      {
        x=(i+k)-n;
        temp=a[i];
        b[x]=temp;

      }
    }
    for(int j=0;j<n;j++)
    {
        cout<<b[j]<<endl;
    }
    
}