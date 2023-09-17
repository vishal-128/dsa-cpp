#include<iostream>
#include<iomanip>
using namespace std;

void solve(string s){
    int UC = 0;
    int LC = 0;
    int Dig = 0;
    int Oc = 0;
    cout<<s;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        
        if(ch >= 'A' && ch <= 'Z'){
            UC++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            LC++;
        }
        else if(isdigit(ch)){
            Dig++;
        }
        else{
            Oc++;
        }
    }
    int sum = 0;

    sum = Dig + Oc + UC +LC;
    double cal = (UC*100.0)/sum;
    cout<<"Uppercase letters are "<<setprecision(2)<<cal<<"%"<<endl;
    cout<<"Lowercase letters are "<<setprecision(2)<<(LC*100.0/sum)<<"%"<<endl;
    cout<<"Digit Are "<<setprecision(2)<<(Dig*100.0/sum)<<"%"<<endl;
    cout<<"Other Character Are "<<setprecision(2)<<(Oc*100.0/sum)<<"%"<<endl;

}
int main(){
    string s;
    getline(cin,s);
    solve(s);
}