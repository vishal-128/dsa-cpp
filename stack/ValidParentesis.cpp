#include<iostream>
#include<stack>
using namespace std;

bool checkValid(string s){
    stack<char> check;
    for(int i = 0 ; i< s.length(); i++){
        char ch = s[i];
        if( (ch == '{') || (ch == '(') || (ch == '[')){
            check.push(ch);
        }
        else{
            if(check.empty()){
                if((ch == '}') || (ch == ')') || (ch == ']')){
                return false;}
            }
            char top = check.top();
            if( (ch == ')' && top == '(' )||
                (ch == ']' && top == '[' )||
                (ch == '}' && top == '{' )){
                    check.pop();
                     }
            else{
                return false;
            }         
        }
    }
    return true;
}



int main(){
    string s = "[(})]";
    if(checkValid(s)){
        cout<< "BALANCED";
    }
    else{
        cout<< "not balanced";
    }
}

