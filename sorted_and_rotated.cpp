// rotated and sorted array
#include<iostream>
using namespace std;

bool check(int nums[],int size)
{
        int cnt = 0;
        for(int i=1;i<size;i++) 
        {
            if(nums[i] < nums[i-1])
                cnt++;
                
        }
        if(nums[size-1] > nums[0])
            cnt++;
        
        return cnt<=1;
}


int main()
{
    int a[5]={3,4,5,1,2};
    int k=2,b[5],n=5,temp,x;
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
    cout<<check(b,5);
}

