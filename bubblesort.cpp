// bubble sorting
// time compexiy O(n^2)

#include<iostream>
using namespace std;

int main()
{
    int i,j,arr[5]={12,34,51,1,3},temp=0;
    for (i=0;i<5;i++)
    {
        for (j=0;j<(5-1-i);j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}