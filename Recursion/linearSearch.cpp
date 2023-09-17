#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int n){
    if(size == 0){
        return false;
    }
    if(arr[0] == n){
        return true;
    }
    else{
        return linearSearch(arr+1,size-1,n);
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    if(linearSearch(arr,5,6)){
        cout<<"Number found";
    }
    else{
        cout<<"number not found";
    }
}