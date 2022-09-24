// double added queue (Deque)

#include <iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i: d)
    {
        cout<<i<<" ";
    }cout<<endl;

    /*d.pop_front();
    cout<<"poping front:"<<endl;
    for(int i: d)
    {
        cout<<i<<" ";
    }cout<<endl; */

    cout<<"Index 1 element :"<<d.at(1)<<endl;
    cout<<"front element :"<<d.front()<<endl;
    cout<<"back element :"<<d.back()<<endl;
    cout<<"empty or not :"<<d.empty()<<endl;

    cout<<"before erase"<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i: d)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"after erasing";



    
}