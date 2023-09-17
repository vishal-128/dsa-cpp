#include<iostream>
using namespace std;

string StringReverse(string s,int start,int end){
    int i=start;
    int j=end;
    if( i > j){
        return s;
    }
    char temp = s[j];
    s[j]=s[i];
    s[i] = temp;
    return StringReverse(s,start+1,end-1);

}
int main(){
    string s="vishal";
    cout<< StringReverse(s,0,s.length()-1);
}