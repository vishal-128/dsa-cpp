#include<iostream>
using namespace std;

int main(){

int num=5;
int *p = 0;
p= &num;
cout<<p<<endl;
cout<<*p<<endl;
int i=1;

int arr[5]={1,2,4};
cout<<"address of first memory block is "<<&arr<<endl;
cout<<"value of first memory block is "<<*(i+arr)<<endl;
cout<<"value of first memory block is "<<i[arr]<<endl;

}
