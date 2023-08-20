#include<iostream>
#include<stack>

using namespace std;

int check(int arr[] , int n){
    stack<int> s;
    stack<int> s1;
    int count = 0;
    for(int i=0;i<n;i++){
        s.push(arr[i]);
    }
    
    while(s.size() != 0){
        int top = s.top();
        count = 0;
    for( int i=0; i<n ;i++){
        
        if( top == arr[i]){
            
            count++ ;
         }
        }
        
        if(count == 1){
            
            s1.push(top);
        }  
        s.pop();
    }
    
    int sum = 0;
    while(s1.size() > 0){
    if( s1.top() > 0){
        sum = sum+s1.top();
        s1.pop();
        
    }
    else{
        sum = sum - s1.top();
        s1.pop();
    }
}
return sum;
}

int main(){
    int n ;
    cin>>n;
    int *a = new int[n];
 
  //  int a[7] ={3, 2, -2, -2, 4, 8, -3} ;
   for(int i=0;i<n;i++){
        cin>>a[i] ;
    } 
    int ans = check(a,n);
    cout<< "Maximum Difference = "<<ans;
}
