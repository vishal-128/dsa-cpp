#include<iostream>
#include<stack>

using namespace std;

class Stack{
    public:
        int top;
        int *arr;
        int size;

        Stack(int size){
            this -> size = size ;
            top = -1;
            arr = new int[size];
        }

    void push(int element){
         
         if(top >= size-1){
            cout<< "Stack Overflow"<<endl;
         }
         else{
            top++;
            arr[top] = element;
         }
    }

    void pop(){
        if(top >= 0 ){
            top--;
        }
        else{
            cout<< "Stack Underflow";
        }
    }   

    int peek(){
        if(top >= 0 ){
        return arr[top];
        }
        else{
            cout<< "Stack is empty" <<endl;
            return -1;
        }

    }
    void isITEmpty(){

        if(top == -1){
            cout<< "stack is empty";
        }
        else{
            cout<< "stack is not empty";
        }
    }
};

int main(){

    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(1);
    st.push(2);
    st.push(1);
    st.push(2);

    st.pop();
    st.pop();
    st.pop();
   cout<< st.peek() <<endl;
   st.isITEmpty();

  /* stack<int> s;

    // push operation
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

    cout<< "size of stack is : "<< s.size() <<endl;    */ 
}