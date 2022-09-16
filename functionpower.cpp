#include<iostream>
using namespace std;
int power(int a1,int b1)
{ 
    int pow=1;
    for(int i=1;i<=b1;i++)
    {
        pow=pow*a1;
        
    }
    return pow;
}
int main()
{
    int a,b;
    cin>>a >> b;
    int x= power(a,b);
    cout<< x;
}