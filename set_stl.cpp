// set
// it stores each elelment uniquely and return sorted output
// auto keyword automatically assign sutable data type for the variable

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(7);
    s.insert(1);
    s.insert(0);

    for(auto i:s)
    {
        cout<<i<<endl;
        
    }
    int m=5;
    cout<<"second iteration"<<endl<<endl;
    s.erase(s.begin());
    
    for(auto i:s)
    {
        cout<<i<<endl;
        
    }
    cout<<endl;
    cout<<"-5 present or not :"<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);
    for (auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";

    }cout<<endl;
}