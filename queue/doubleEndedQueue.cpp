#include<iostream>
#include<queue>
using namespace std;

int main(){

    deque<int> d;
    d.push_front(10);
    d.push_front(9);
    d.push_front(8);
    d.push_back(11);

    cout<< d.front()<<endl;
    cout<< d.back()<<endl;

    d.pop_back();
    d.pop_front();

    cout<< d.front()<<endl;
    cout<< d.back()<<endl;

    if(d.empty()){
        cout<< "Queue is empty";

    }
    else{
        cout<< "queue is not empty";
    }
}
