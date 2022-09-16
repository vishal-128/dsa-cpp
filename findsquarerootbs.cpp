// finding square root for the number using binary search
#include<iostream>
using namespace std;
int findsquareroot(int a[],int n,int k)
{
 int s=0,e=n-1,mid,ans;
    while(s<=e)
    {
        mid= (s+e)/2;
        int x=mid-1;
        if((a[mid]*a[mid])==k)
        {
            cout<<"the given number square root is :"<<a[mid]<<endl;
            break;
        }
       
        
        else if((a[mid]*a[mid]>k))
        {
            e=mid-1;
        }
        else 
        {
            ans=a[mid];
            s=mid+1;
        }
        
    }
    return ans;
}
int main()
{
    int arr[10000],i,n;
    cout<<"enter the number of which you want square root :";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        arr[i]=i;
    }
   cout <<findsquareroot(arr,n,n);
}