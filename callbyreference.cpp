#include<iostream>
using namespace std;
void swaps(int &p, int &k)//call by reference
{
    int c;
    c=p;
    p=k;
    k=c;
}
int main();
{
    int a,b;
    cout<<"enter 2 values \n";
    cin>>a>>b;
    swaps(a,b);
    cout<<"after swap value of a="<<a<<"\n";

    cout<<"after swap value of b="<<b<<"\n";
}