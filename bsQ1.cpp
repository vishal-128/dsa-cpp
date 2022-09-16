// first and last occurace of element
#include<iostream>
using namespace std;
void firstOccurance(int a[],int n,int s)
{
    int mid,start,end,c1=0,c2=0;
    start=0;
    end=n-1;
    while(end>=start)
    {
        mid=(end+start)/2;
        if (a[mid]==s)
        {
            end=mid-1;
            cout<<"fist occourance is at :"<<mid<<endl;

        }
        else if (a[mid]>s)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
        
    }

void lastOccurance(int a[],int n,int s)
{
    int mid,start,end,c1=0,c2=0;
    start=0;
    end=n-1;
    while(end>=start)
    {
        mid=(end+start)/2;
        if (a[mid]==s)
        {
            start=mid+1;
            cout<<"last occourance is at :"<<mid<<endl;

        }
        else if (a[mid]>s)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
        
}

int main()
{
    int arr[5]={1,3,3,3,5};
    firstOccurance(arr,5,3);
    lastOccurance(arr,5,3);
}
