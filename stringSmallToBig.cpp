#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int i = 0;
    string ans = "";
    while( i < s.length()){
    if( s[i] >= 'A' && s[i] <= 'Z'){
            cout << ans <<endl;
            ans = "";
        }
        
            if ( s[i] >= 'a' and s[i] <= 'z' )
            {
                s[i] = 'A' + (s[i] - 'a');
                ans.push_back(s[i]);
            }

            else{
                s[i] = 'a' + (s[i] - 'A');
                ans.push_back(s[i]);
            }
               
         i++;
    }
    cout<< ans;

}