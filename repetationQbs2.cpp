#include<iostream>
using namespace std;
int firstOccurance(int a[],int n,int s)
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
            c1++;

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
        return c1++;
    }

int lastOccurance(int a[],int n,int s)
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
            c2++;
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
      return c2++;  
}

int main()
{
    int arr[5]={3,3,4,4,5};
    int  a= firstOccurance(arr,5,3);
    int b=lastOccurance(arr,5,3);
    cout<<"number of repetation of element is:"<<endl<<a+b-1;
}
