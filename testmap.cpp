#include<map>
#include<iostream>
using namespace std;

int main(){

    map<string,char> student {{"ravi",'D'},{"ravinder",'C'},{"raju",'B'},{"rahul",'A'}};
    cout<< student.at("raju")  <<endl;
    cout<<student.size()<<endl;
    auto it = student.find("raju");  
    cout<< it ->  second;
}