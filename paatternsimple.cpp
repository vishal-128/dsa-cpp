#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    char character='A';
    for (i=0;i<4;i++)
    {   
        // character='A';
        // for (k=0;k<4-i;k++)
        // {
        //     cout<<" ";
        // }
        for (j=0;j<=i;j++)
        {
            cout<<character;
            character+=1;
        }
        
        cout<<endl;
    }
}