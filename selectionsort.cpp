// selection sorting
// time complexity is O(n^2)

#include<iostream>
using namespace std;

int main()
{
    int arr[6]={42,12,57,22,31,1},i,j,temp=0,min_index;
    for (i=0;i<(6-1);i++)
    {
        min_index=i;
        // min=arr[i];
        for (j=i+1;j<6;j++)
        {
            if(arr[j]< arr[min_index])
            {
                // min=arr[j];
                min_index=j;
            }
        }
                temp= arr[min_index];
                arr[min_index]=arr[i];
                arr[i]=temp;

    }
        for (i=0;i<6;i++)
        {
            cout<<arr[i]<<endl;
        }
    }


