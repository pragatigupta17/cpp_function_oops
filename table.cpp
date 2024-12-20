#include<iostream>
using namespace std;
void table(int n,int a)
{
    if(a>10)
    {
        return;
    cout<<n*a<<"\t";
    table(n,a+1);
}
int main()
{
    int x;
    cout<<"enter no:"<<"\n";
    cin>>x;
    table(x,1)
}
}