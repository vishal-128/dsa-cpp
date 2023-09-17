#include<iostream>
using namespace std;

bool checkArraySorted(int arr[],int size){

    if( size == 0 || size == 1){
        return true;
    }

    if( arr[0] > arr[1]){
        return false;
    }
    else{
        return checkArraySorted(arr+1,size-1);
    }
}

int main(){
    int a[6] = {1,2,3,5,5,5};
    if(checkArraySorted(a,6)){
        cout<< "array is sorted";
    }
    else{
        cout<< "array is not sorted";
    }
}