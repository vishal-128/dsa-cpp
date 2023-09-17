#include<iostream>
using namespace std;

bool StringReverse(string s,int start,int end){
    int i=start;
    int j=end;
    if( i > j){
        return true ;
    }
    if(s[i] == s[j])
        return StringReverse(s,start+1,end-1);

    else{
        return false;
    }
}
int main(){
    string s="abaaba";
    if(StringReverse(s,0,s.length()-1)){
        cout<< "is palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}