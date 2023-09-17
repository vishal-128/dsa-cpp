#include<iostream>
#include<queue>
#include<stack>

using namespace std;
queue<int> ReverseTillK(queue<int> q , int k){
    stack<int> s;
    int c=0;
    while( c != k){
        s.push(q.front());
        q.pop();
        c++;
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int i = 1;
    while(i <= q.size()-k){
        int A = q.front();
        q.pop();
        q.push(A);
        i++;
    }
return q;
}

int main(){
    queue<int> q;
    queue<int> q1;
    queue<int> ans;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q1 = q;
    while(!q1.empty()){
        cout<< q1.front()<<" ";
        q1.pop();
    }
    cout<< endl;
    ans  = ReverseTillK(q,3);
    while(!ans.empty()){
        cout<< ans.front()<<" ";
        ans.pop();
    }

}