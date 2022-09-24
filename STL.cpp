// container--vector

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    vector<int> b(a);

    for(int i:b)
    {
        cout<<i<<" ";
    
    }cout<<endl;
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"Capacity--> "<<v.capacity()<<endl;
    cout<<"Size--> "<<v.size()<<endl;

    cout<<"Front :"<<v.front()<<endl;
    cout<<"back :"<<v.back()<<endl;

    cout<< "before pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";

    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    
    }
    cout<<endl<<"after clear command :"<<endl;
    v.clear();
    for(int i:v)
    {
        cout<<i<<" ";
    
    }

    
    // capacity show no.of element it can store 
    // size shows how many element are there

    



    
}