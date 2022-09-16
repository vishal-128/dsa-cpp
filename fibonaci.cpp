 #include<iostream>
 using namespace std;
 int fibonaci(int n)
 {
    int i,a=0,b=1,sum=0;
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    else{
    for (i=3;i<=n;i++)
    {
        sum=a+b;
        //cout<< sum;
        a=b;
        b=sum;
    }
    return sum;
    }
 }
 int main()
 {
    int x;
    cout<<"enter a number:";
    cin>>x;
    
    int y=fibonaci(x);
    cout<< y;
 }