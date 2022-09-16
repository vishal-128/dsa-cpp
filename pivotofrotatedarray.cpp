#include<iostream>
using namespace std;
int pivotofrotatedarray(int a[],int n)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
       
        else
        {
            e=mid-1;
        }
    }
    return s;
}
int main()
{
    int arr[5]={7,8,0,1,2};
    cout<<"position of pivot point is:"<<pivotofrotatedarray(arr,5);
}
