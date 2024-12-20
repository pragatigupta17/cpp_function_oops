#include<iostream>
using namespace std;
void fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    return (a*fact(a-1));
}
int main()
{
    int a;
    cout<<"enter any no for factorial"<<"\n";
    cin>>a;
    cout<<fact(a);
}

