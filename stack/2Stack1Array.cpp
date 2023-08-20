#include<iostream>
#include<stack>

using namespace std;


class Stack{
    public:
        int top1;
        int top2;
        int *arr;
        int size;

        Stack(int size){
            this -> size = size ;
            top1 = -1;
            this -> top2 = size;
            arr = new int[size];
        }

    void push1(int element){
         
         if(top2 - top1 > 1){
            top1++;
            arr[top1] = element;
            
         }
         else{
            cout<< "Stack Overflow 1"<< endl;
         }
    }

    void push2(int element){
         
         if(top2 - top1 > 1){
            top2--;
            arr[top2] = element;  
         }
         else{
            cout<< "Stack Overflow 2"<< endl;
         }
    }

    void pop1(){
        if(top1 >= 0 ){
            top1--;
        }
        else{
            cout<< "Stack Underflow 1";
        }
    }   

    void pop2(){
        if(top2 < size){
            top2++;
        }
        else{
            cout<< "Stack Underflow 2";
        }
    }   
};

int main(){

    Stack st(6);
    st.push1(1);
    st.push1(2);
    st.push1(1);
    st.push1(2);
    st.push1(1);
    st.push1(2);
    st.push2(3);

}