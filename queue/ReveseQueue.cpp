#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int reverse(queue<int> q){
    stack<int> s;
    //cout<< "size : "<< q.size()<< endl;
    while(!q.empty()){
     //   cout<< q.front() <<endl;
        s.push(q.front());
        q.pop();
    }
  //  cout<< "size : "<< s.size()<< endl;
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
     while(!q.empty()){
        cout<< q.front()<<" ";
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    reverse(q);
}