#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerNum(int arr[], int n){
    stack<int> s;
    vector<int> ans(n);
    s.push(-1);

    for( int i=n-1; i>=0;i--){

        bool itsTrue = true ;
        while(itsTrue){
        if( s.top() <= arr[i]){

            ans[i]= s.top();
            s.push(arr[i]);
            itsTrue = false;
        }
        else{
            s.pop();
        }
    }
} 
    return ans;
    
}

int main(){
    int a[] = {2 , 1, 4, 3};
    vector<int> c(4);
    c = nextSmallerNum(a, 4);
    for(int i=0 ; i<4 ; i++){
        cout<<  c[i] << " ";
    }

}