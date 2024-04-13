#include<iostream>
using namespace std;

template<class T>
void swapvalue(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
    cout<<"inside swap a="<<a<<" b="<<b<<endl;
}

int main()
{
    int a=10,b=20;
    

    swapvalue(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;

    double d1=78.90,d2=22.65;
    swapvalue(d1,d2);
    cout<<"d1="<<d1<<" d2="<<d2<<endl;
}