#include<iostream>
using namespace std;
void sumcheck(int a[],int n,int s)
{
    int i,j,sum=0,k;
    for (i=0;i<n-2;i++)
    {
        for (j=i+1;j<n-1;j++)
        {
            for (k=j+1;k<n;k++)
            {
            sum=a[i]+a[j]+a[k];
            if(s==sum)
            {
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
            }
            }
        }
    }

}
int main()
{
    int arr[5]={1,2,3,4,5};
    sumcheck(arr,5,12);
}