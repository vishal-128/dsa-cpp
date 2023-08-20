#include<iostream>
#include<stack>
using namespace std;

bool check(string str){
    stack<char> s;
    for (int i=0; i<str.length();i++){
        char ch = str[i];
        if( ch == '(' || ch == '*' || ch == '/' || ch == '+' || ch == '-'){
            s.push(ch);
        }
        else if(ch == ')'){

            char top = s.top();
            if(top == '+' || top == '-' || top =='*' || top == '/'){
                s.pop();
            }
            else{
                return true;
            }
            s.pop();
        }
    }
    return false;
}
int main(){
    string s = "(b/c*c)-(a+b)";
    if(check(s)){
        cout<< "Available Redundant Brackets";
    }
    else{
        cout<< " No Redundant Brackets";
    }
}