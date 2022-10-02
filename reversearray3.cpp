// reverse array from a given position m
#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v1,int m)  // method
{
    int end=v1.size()-1,start=m;
    while(start<=end)
      {
        swap(v1[start],v1[end]);
        start++;
        end--;
      
        
    }
    return v1;


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
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int m;
    cout<<"enter a number :";
    cin>>m;

    vector<int> ans = reverse(v,m);
    print(ans);
    
}