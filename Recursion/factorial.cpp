#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    int n;
    cout<< "enter a number: ";4
    cin>> n;
    cout<< "factoraial is : "<<factorial(n);
}