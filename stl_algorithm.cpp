// stl algorithm

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);

    cout<<"findind 5 in vector :"<<binary_search(v.begin(),v.end(),5)<<endl;

    cout<<"lower bound :"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<"upper bound :"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<< "max :"<<max(a,b)<<endl;
    cout<<"min :"<<min(a,b);
    swap(a,b);
    cout<<endl<<"a :"<<a<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"reverse string :"<<s<<endl;

    // rotate

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

       

}