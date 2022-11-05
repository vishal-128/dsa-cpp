// array merge in existing array in sorted manner
#include<iostream>
#include<vector>
using namespace std;
vector<int> mergearray(vector<int> a,vector<int> b)
{
    int s1,s2,s3;
    s1=a.size();
    s2=b.size();
    s3=s1+s2;
    int i=0,j=0;

    while(s3>0)
    {
        if(b[i]<a[j])
        {
            
        }
    }
 

    return a;
}

void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<< v[i]<<" ";
    }cout<<endl;
}

int main()
{
    vector<int> a,b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    b.push_back(2);
    b.push_back(5);
    vector<int> ans=mergearray(a,b);
    print(ans);