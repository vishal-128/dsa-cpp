#include<iostream>
using namespace std;

void SayDigit(int n){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n == 0){
        return;
    }
    SayDigit( n/10);
    int digit = n%10;
    cout<< arr[digit] <<" ";
    
}
int main(){
    SayDigit(123);
}