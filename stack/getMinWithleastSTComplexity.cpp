#include<stack>
#include<iostream>
using namespace std;

class getMin{
public: 
int min;
stack<int> s ;

int pushOperation(int d){
    if(s.empty()){
        s.push(d);
        min = d;
    }
    else{
        if( d > min){
            s.push(d);
            return s.top();
        }
        else{

        //    int val = 2*d - min;
            int val = min-d;
            min = d;
            s.push(val);
            
        }
    }
    return min;
}

int popOperation(){
    if(s.empty()){
        cout<< "stack is already empty";
        return -1;
    }
    else{
       int curr = s.top();
        s.pop();
        if( curr > min){
            return curr;
        }
        else{  // curr(2*data - min) < min
            int PrevMin = min;
            int val = min + curr;
            min = val;

            return PrevMin;
        }
    }
}
int getMini(){
    if(!s.empty())
    return min;

    else{
        return -1;
    }
}
};

int main(){
    getMin m;;
    cout<<m.pushOperation(6) <<endl;
    cout<<"min = "<< m.getMini()<<endl;
    cout<<m.pushOperation(4) <<endl;
    cout<<"min = "<< m.getMini()<<endl;
    cout<<m.pushOperation(9) <<endl;
    cout<<"min = "<< m.getMini()<<endl;
    cout<<m.pushOperation(3) <<endl;
    cout<<"min = "<< m.getMini()<<endl;
    cout<<m.pushOperation(5) <<endl;
    cout<<"min = "<< m.getMini()<<endl;
    cout<<"pop element = "<<m.popOperation() <<endl;
    cout<<"min = "<< m.getMini()<<endl;
    cout<<"pop element = "<<m.popOperation() <<endl;
    cout<<"min = "<< m.getMini()<<endl;
    cout<<"pop element = "<<m.popOperation() <<endl;
    cout<<"min = "<< m.getMini()<<endl;
    cout<<"pop element = "<<m.popOperation() <<endl;
    cout<<"min = "<< m.getMini()<<endl;
    cout<<"pop element = "<<m.popOperation() <<endl;
    cout<<"min = "<< m.getMini()<<endl;

    


}