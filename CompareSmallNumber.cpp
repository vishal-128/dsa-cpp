#include<iostream>
using namespace std;

int find2smallestNO(int arr[],int n){
    int A,B;
    A=arr[0];
    B = arr[0];

    for(int i=0;i<n ;i++){
        if(arr[i] < A){
            A = arr[i];
        }
    }
        for(int i=0;i<n ;i++){
        if( arr[i] < B && arr[i] != A ){
                 B = arr[i];
            
        }   
    }
    cout<< "A :"<<A<<endl;
    cout<< "B :"<<B<<endl;
    int num = A*10+B;
    return num;
}

int solve(int n , int m){
    int x = n;
    int c = 0;
    while( x != 0){
        int rem = x % 10;
        c++;
        x = x/10;
    }
  
    x = n;
    int *arr = new int[c];
    c=0;
    while( x != 0){
        int rem = x % 10;
        arr[c] = rem;
        c++;
        x = x/10;
    }
    int ans = find2smallestNO(arr,c);
    if( ans > m){
        cout<< "yes its true"<<endl;
    }
    else{
        cout<< "No its false"<<endl;
    }
}

int main(){
    int n = 1257;
    int m = 13;
    solve(n,m);
}