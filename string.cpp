    #include<iostream>
    using namespace std;

    string reverseWords(string s) {
        s = " "+s+" ";
        string sub,ans ="";
        int c = 1;
        for(int i=0;i<s.length();i++){
            if(s[i] == '\0' || isspace(s[i])){
                c++;
            }
        }
        int j = 0;
        int *arr = new int[c];
        for(int i=s.length()-1;i>=0;i--){
            if( isspace(s[i])){
                arr[j] = i;
                j++;
            }
        }
        for(int k = 0 ; k < c-2 ; k++){
            
           cout<< arr[k]<< " "<<arr[k+1];
           sub = s.substr(arr[k+1],arr[k]);
            cout<< sub <<endl;
            for(int i=0;i<sub.length();i++){
                ans.push_back(sub[i]);
            }
            sub="";
            ans = ans+" ";
        }
        return ans;
    }
    int main(){
        string s = "the sky is blue";
        cout<< reverseWords(s);
    }