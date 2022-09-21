// insertion sorting

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,3,1,7,4};
    int i;
    for (i=1;i<5;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for (;j>=0;j--)
        {
            if (arr[j]> temp)
            {

            arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        
        arr[j+1]=temp;
    }
     for (i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    } 
}