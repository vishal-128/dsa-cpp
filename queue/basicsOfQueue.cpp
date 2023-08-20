#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(25);

    cout<< " first element of the queue is :"<< q.front()<< endl;;

    q.pop();
    cout<< " first element of the queue is :"<< q.front() << endl;

    cout<< " size of the queue is : "<< q.size();
}