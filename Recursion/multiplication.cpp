#include<iostream>
using namespace std;

int multiplication(int n , int num){
    if( n == 1){
        return num;
    }
    return num*multiplication(n-1,num);
}
int main(){
    int num ;
    cout<< "enter a number : ";
    cin>> num;
    int n ;
    cout<< "enter power : ";
    cin>> n;
    cout<<multiplication(n,num);
}