// container--array

#include<iostream>
#include <array>
using namespace std;
int main()
{
    int basic[3]={1,2,3};
    array<int,4> a={4,5,6,7};
    int size=a.size();
    for (int i=0;i<4;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"element at second index :  "<<a.at(2)<<endl;
    cout<<"empty or not : "<<a.empty()<<endl;
    cout<<"First element : "<<a.front()<<endl;
    cout<<"last element : "<<a.back()<<endl;
}