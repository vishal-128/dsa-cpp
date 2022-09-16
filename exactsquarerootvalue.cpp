// exact square root value
#include<iostream>
#include<math.h>
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
double exactvalue(int n, int precision,int tempsol)
{
    double factor=1;
    double ans=tempsol;
    for (int i=0;i<precision;i++)
    {
        factor=factor/10;
        for (double j=ans;j*j<n;j=j+factor)
        {
            ans=j;

        }
    }
    return ans;
    
}

int main()
{
    int arr[10000],i,n,tempsol;
    cout<<"enter the number of which you want square root :";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        arr[i]=i;
    }
    tempsol=sqrt(n);
    int answer=findsquareroot(arr,n,n);
   cout <<findsquareroot(arr,n,n)<<endl;
   cout<<"answer is :"<<exactvalue(n,3,tempsol);
}