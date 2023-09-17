#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int start,int end,int k){
    if(start > end){
        return false;
    }
    int mid = start+(end-start)/2;
    if(arr[mid] == k){
        return true;
    }
    else if(arr[mid] < k){
        return BinarySearch(arr,mid+1,end,k);
    }
    else if(arr[mid] > k){
        return BinarySearch(arr,start,mid-1,k);
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    if(BinarySearch(arr,0,4,6)){
        cout<< "number found";
    }
    else{
        cout<<"number not found";
    }
}