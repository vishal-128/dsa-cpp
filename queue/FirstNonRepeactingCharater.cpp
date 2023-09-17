#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

string FindNonRepeating(string s){
    unordered_map<char,int> count;
    queue<char> q;
    string ans = "";

    for(int i=0; i< s.length() ; i++){
        char ch = s[i];
        // count the chararacter in map
        count[ch]++;
        // push in queue
        q.push(ch);
        // check for repeting or non repeting
        while(!q.empty()){
            if(count[q.front()] > 1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;

}
int main(){
  //  string s = "abbac";
    string s = "aabc";
    string sol = FindNonRepeating(s);
    cout<< sol;
}