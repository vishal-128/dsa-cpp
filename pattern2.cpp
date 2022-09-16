#include<iostream>
using namespace std;
int main()
{
    int i,j,k,c;
    for (i=0;i<4;i++)
    {
        for (k=0;k<4-i;k++)
        {
            cout<<" ";
        }
        for (j=0;j<=i;j++)
        {
            cout<<"*";

        }
        for (c=1;c<=i;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}