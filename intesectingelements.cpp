#include<iostream>
using namespace std;
void intersection(int a[],int b[],int n)
{
    int i,c=0,j,u,d[10];
    for (i=0;i<n;i++)
    {
        u=a[i];
        c=0;
        for(j=0;j<n;j++)
        {
            
            if(b[j]==u)
            {
                c++;

            }
            
        }
        if(c>0)
            {
                cout<<u<<endl;
            }
    }

            
    
}        
     
    

int main()
{
    int arr[7]={2,7,2,3,2,3,7};
    int ar[7]={5,7,1,9,2,3,4};
    intersection(arr,ar,7);
}