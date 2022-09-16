#include<iostream>
using namespace std;
void uniqueOrduplicate(int a[],int n)
{
    int i,c=0,j,u;
    for (i=0;i<n;i++)
    {
        u=a[i];
        c=0;
        for(j=0;j<n;j++)
        {
            
            if(a[j]==u)
            {
                c++;

            }
            
        }
        if(c==2)
            {
            //cout<<"unique number is:"<<u;
            cout<<"duplicate number is:"<<u<<endl;
            //break;
            }
    
                
     }
    
}
int main()
{
    int arr[7]={2,7,2,3,2,3,7};
    uniqueOrduplicate(arr,7);
}