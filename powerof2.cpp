#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int i=0,c=0;
    while(i<=n)
    {
        int a=pow(2,i);
        if(n==a)
        {
            c=1;
            break;
        }
    i++;
    }
    if (c>0)
    cout<<"true";
    else
    cout<<"false";
}



