#include<iostream>
using namespace std;

void sumrow(int a[][4], int row, int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum = sum+a[i][j];
            
        }
        cout<<i<<" row sum = " << sum<<endl;
        sum=0;
    }
    
}
int main()
{
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    sumrow(arr,3,4);
}

