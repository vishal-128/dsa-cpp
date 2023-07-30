#include<iostream>
using namespace std;

class B{
    public:

        int a;
        int b;

        void operator+ (B &obj){
            int value1 = this->a;
            int value2 = obj.b;
            cout<<"output :"<< value1-value2 <<endl;
        }
};

int main(){
    B obj1,obj2;
    obj1.a = 4;
    obj2.b = 7;
    obj1 + obj2;

    return 0;
}