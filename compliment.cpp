//compliment of number
#include<iostream>
using namespace std;
int main()
{
    int n,n1,mask=0;
    cout<<"enter a number:";
    cin>>n;
    int m=n;
    if (n==0){
    cout<<1;
    return 0;
    }
    while(m!=0)
    {
        mask=(mask<<1)|1; //left shift one time
        m=m>> 1;    // right shift one time

    }
    int ans= (~n) & mask;
    cout<<ans;
    return 0;
}