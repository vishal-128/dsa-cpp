// array merge
#include<iostream>
#include<vector>
using namespace std;

vector<int> mergearray(vector<int> a,vector<int> b)
{
    int s1,s2,s3;
    s1=a.size();
    s2=b.size();
    s3=s1+s2;
    vector<int> c;
    for(int i=0;i<s1;i++)
    {
        c.push_back(a[i]);
    }
    for(int j=s1;j<s3;j++)
    {
        c.push_back(b[j-s1]);
    }
    return c;
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
    b.push_back(4);
    b.push_back(5);
    vector<int> ans=mergearray(a,b);
    print(ans);

}