#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=-567,n1,a,b=0;
    n1=n;
    
    while(n1!=0)
    {
        a=n1%10;
        b=(b*10)+a;
        n1=n1/10;
        //cout<<b; 

    }
    cout<<b;
    //return 0;
}