#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid)
{
    int studentcount=1;
    int pageSum=0;
    for (int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else
        {
            studentcount++;
            if(studentcount>m || arr[i]>mid){
            return false;
            }
        pageSum=arr[i];
        }
    }
    return true;
}

int bookallocation(int a[],int n,int m)
{
 int i,end=0,beg=0,sum=0,ans=-1;
 for (i=0;i<n;i++)
 {
    sum=sum+a[i];
 }
 end=sum;
 int mid= (beg+end)/2;
 while(beg<=end)
 {
    mid=(beg+end)/2;
    if (isPossible(a,n,m,mid))
    {
        ans=mid;
        end=mid-1;
    }
    else
    {
        beg=mid+1;
    }

    
 }
 return ans;
}

int main()
{
    int arr[4]={10,20,30,40};
    cout<<bookallocation(arr,4,2);
}
