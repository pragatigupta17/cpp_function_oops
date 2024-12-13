// table
#include<iostream>
using namespace std;
void table (int a , int n)
{
    if(a>10)
    {
        return;
    }
    cout<<n*a<<"\t";
    table(n,a+1);
}
int main()
{
    int x;
    cout<<"enter no:"<<"\n";
    cin>>x;
    table(x,1);
}