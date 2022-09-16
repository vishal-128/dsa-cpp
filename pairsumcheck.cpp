#include<iostream>
using namespace std;
void sumcheck(int a[],int n,int s)
{
    int i,j,sum=0;
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if(s==sum)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }

}
int main()
{
    int arr[5]={2,-3,3,3,-2};
    sumcheck(arr,5,0);
}