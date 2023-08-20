#include<iostream>
#include<stack>
using namespace std;

bool verifyCelebrity(int a[][2] , int n, int ele){
    // all rows are zeros (celebrity knows no one)
    // all col 1 except diognal element(everyone knows celebrity)
    int count = 0;
    for(int i = 0; i < n ; i++)
    {
        
        if( a[ele][i] != 0){
            
            return false;
        }
        if( a[i][ele] == 0){
                count ++;
            }
    }

    if(count == 1){
        return true;
    }
    else{
        return false;
    }

}

int FindCelebrity(int a[][2] , int n){
    stack<int> s;
 //   vector<int> arr(n);
    // no.of persons in the party
    for(int i=0 ; i<n ; i++){
        s.push(i);
    }
    while( s.size() != 1){

        int A = s.top();
        s.pop();
        int B = s.top();
        s.pop();
        // check whether either of them is a celebrity or not
        // check if A knows B or not
        if( a[A][B] == 1){
            s.push(B);
        }
        // check if B knows A or not
        else if( a[B][A] == 1){
            s.push(A);
        }

    }
    int possibleCandidate = s.top();
    bool check = verifyCelebrity(a , n ,possibleCandidate);
    if(check) 
    {
        return possibleCandidate ;
    }
    else{
        return -1;
    }
}

int main(){
   const int n = 2;
 /*   int a[][n] ={{0, 1, 0},
                {0, 0 , 0},
                {0, 1 , 0}}; */

    int a[][2] ={{0, 1},
                {1, 0 }};
                
    int x = FindCelebrity(a,n);
    cout<< " celebrity element is : "<< x;
}
