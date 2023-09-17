#include<iostream>
#include<queue>
using namespace std;

bool checkDuplicate( string r){
    cout<< r<< endl;
    int count = 0;
    for(int j=0;j<r.length();j++){
        char ch = r[j];
    for(int i=0;i<r.length();i++){
        if(ch == r[i]){
            count++;
        }
    }
    }
    if(count == 4){
        return true;
    }
    else{   
        return false;
    }
}


int solve(string str){
    int i=0;
    int c=0;
    string q="";
    while(str[i+3] != '\0'){
        q="";
        for(int j=i;j<i+4;j++){
            
            char ch = str[j];
            q.push_back(ch);           
        }
        // check there is no repetation;
       bool ans = checkDuplicate(q);
        i++;
        if(ans){
            c++;
        }
    }
    return c;
}

int main(){
    string s = "baninao";
    int ans = solve(s);
    cout<< ans;
}