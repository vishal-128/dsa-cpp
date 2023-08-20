#include<iostream>
using namespace std;

bool check(string s1, string s2){
    int i =0,j=0;
    
    while( j < s2.length() || i< s1.length() ){
        
        if(s1[i] == s2[j] ){
            i++;
            j++;
        }
        else if( s1[i] == '?'){
            i++;
            j++;
        }
        else if( s1[i] == '*'){
            if(s1[i+1] == '\0' && s2[j] != '\0')
            {
                return true;
            }   
            
            else{
                i++;
                for( j=i;j<s2.length();j++){
                    if(s1[i] == s2[j]){
                        break;
                    }
                }
                
            }
        }
        else{
            return false;
        }
    }
    return true;
    }

int main(){
    string s1 = "******";
    string s2 = "";
    if(check(s1,s2)){
        cout<<"True" ;
    }
    else{
        cout<< "false";
    }
} 
    
