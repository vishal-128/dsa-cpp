#include<iostream>
using namespace std;

int fibonaci(int pos){

    if(pos == 1){
        return 0 ;
    }
    if (pos == 2){
        return 1;
    }
    
   return fibonaci(pos-1) + fibonaci(pos-2);
   
    
}
int main(){
   cout<< fibonaci(8);
}