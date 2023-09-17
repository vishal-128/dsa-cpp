#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> interleaf(queue<int> q){
    stack<int> s;
    int half = q.size()/2;
    while(half > 0){
        int val = q.front();
        q.pop();
        s.push(val);
        half -- ;
    }
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);

    }
    half = q.size()/2;
    while ( half > 0){
        int val = q.front();
        q.pop();
        q.push(val);
        half--;
    }
    half = q.size()/2;
    while(half > 0){
        int val = q.front();
        q.pop();
        s.push(val);
        half -- ;
    }
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
        int val2 = q.front();
        q.pop();
        q.push(val2);
    }
    return q;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    queue<int> ans = interleaf(q);
    cout<<ans.size()<<endl;
    while(!ans.empty()){
    cout<< ans.front()<<" ";
    ans.pop();
    }
}
