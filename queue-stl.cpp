// queue
// first in first out

#include <iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("vishal");
    q.push("garg");
    q.push("ram");

    cout<<"First elelment :"<<q.front()<<endl;
    q.pop();
    cout<<"First elelment :"<<q.front()<<endl;
    cout<<"size :"<<q.size()<<endl;


}