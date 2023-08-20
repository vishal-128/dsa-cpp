#include<iostream>
#include<stack>
using namespace std;

int check(string str){
    int a = 0, b = 0;
    if( str.length() % 2 != 0){
        return -1 ;
    }
    stack<char> s;
    for (int i=0; i<str.length(); i++){
        char ch = str[i];
        if( ch == '{'){
            s.push(ch);
        }
        else{
        if( !s.empty()){
            char top = s.top();
            if( top == '{' && ch == '}'){
                s.pop();
            }
        }    
            else{
                if(ch == '}'){
                    a++;
                }
            }
        }
        b = s.size();
    }
    if( a % 2 == 0 && b % 2 == 0){
        return (a+b)/2;
    }

    if( a % 2 != 0 && b % 2 != 0){
        return ((a+1)/2 + (b+1)/2);
    }
    else{
        return -1;
    }

return 1;
}

int main(){
    string s = "}}}}{{{{";
    int c = check(s);
    if(c == -1){
        cout<< "NOT VALID";
    }
    else{
        cout << "No.of changes required : "<<c;
    }
}
