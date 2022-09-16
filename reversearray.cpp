#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int x=arr[end];
        arr[end]=arr[start];
        arr[start]=x;
        start++;
        end--;
    }
    
    
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
    

int main()
{
    int a[6]={1,2,3,4,5,6};
    reverse(a,6);

}