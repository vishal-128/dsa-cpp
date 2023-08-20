#include<iostream>
#include<stack>
using namespace std;

void solve(int size, stack<int> s){

    int top ;
    int arr[size];
    int mid = size/2;
 
 // storing top elements in array
    for(int i=0;i < mid;i++){
        top = s.top();
        arr[i] = top;
      //  cout<< arr[i] << "  ";
        s.pop();
    }
    // deleting the middle element
    s.pop();

    // re pushing the above elements
    for(int i=mid-1 ; i >= 0 ; i--){
        s.push(arr[i]);
    }
    // printing stack
    int len = s.size();
    for(int i=0 ; i< len ;i++){
        cout<< s.top() << " ";
        s.pop();
    } 
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    solve(st.size(),st);
}