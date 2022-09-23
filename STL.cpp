// container--vector

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity--> "<<v.capacity()<<endl;
    cout<<"Size--> "<<v.size()<<endl;
    // capacity show no.of element it can store 
    // size shows how many element are there

    



    
}