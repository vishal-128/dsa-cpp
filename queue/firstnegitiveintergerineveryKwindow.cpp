#include<iostream>
#include<queue>
using namespace std;

void find_negitive(int arr[], int n, int k){
    queue<int> q;
    int c=0;
    for(int i=0;i<=n-k;i++){
        c=0;
        for(int j=i;j<i+k;j++){
            if(arr[j] < 0){
                q.push(arr[j]);
                c++;
                break;
            }   
        }
        if(c == 0){
            q.push(0);
        }
    }
    while(!q.empty()){
        cout<< q.front() <<" ";
        q.pop();
    }
}
int main(){
    int k=2;
    int n=5;
    int arr[] = {-8,2,3,-6,-5};
    find_negitive(arr,n,k);
}