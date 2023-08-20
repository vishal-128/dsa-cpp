#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    // push operation
    cout<< "size of stack is : "<< s.size() <<endl;   
    cout<< "the Top element is :" << s.top() << endl;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<< "the Top element is :" << s.top() << endl;

    s.pop();
    cout<< "the Top element is :" << s.top() << endl;

    if(s.empty()){
        cout<< " stack is empty" << endl;
    }
    else{
        cout<< " stack is not empty" << endl;
    }

    cout<< "size of stack is : "<< s.size() <<endl;   
}