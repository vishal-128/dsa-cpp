// this program is not very suitable it is suitable for a paticular conditio //self tried
#include<iostream>
using namespace std;
void findnuminrotated(int a[],int n,int k)
{
    int s=0,e=n-1,mid,x=n;
    while(s<=e)
    {
        mid= (s+e)/2;
        int x=mid-1;
        if(a[mid]==k)
        {
            cout<<"position of number is :"<<mid<<endl;
            break;
        }
        else if(k>a[mid] & k<=a[e])
        {
            s=mid+1;
        }
        else if(a[e]<k & k>a[mid])
        {
            e=mid-1;
        }
    }
}
int main()
{
    int arr[5]={5,7,1,2,3};
    findnuminrotated(arr,5,3);
}
