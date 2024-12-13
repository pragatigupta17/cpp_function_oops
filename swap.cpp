#include<iostream>
using namespace std;
void swaps(int a, int b)//formal parameter
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"after swaps value of a="<<a<<"\n";

    cout<<"after swaps value of b="<<b<<"\n";
}
int main()
{
    int a,b;
    cout<<"enter 2 value:"<<"\n";
    cin>>a>>b;
    swaps(a,b);
    cout<<"after swaps value of a="<<a<<"\n";
    cout<<"after swaps value of b="<<b<<"\n";
}