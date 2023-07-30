// ascending order binary search
#include<iostream>
using namespace std;
void BinarySearch(int a[],int n,int s)
{
    int mid,end,start;
    start=0;
    end=n-1;
    while(end>=start)
    {
        mid=end-start/2;
        if (a[mid]==s)
        {
            cout<<"number found at position :"<<mid<<endl<<a[mid]<<endl;
            //break;
        }
        if (a[mid]>s)
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
    int arr[5]={2,2,2,2,4};
    BinarySearch(arr,5,2);
}