#include<iostream>
using namespace std;
class top
{
    int a,b;
    public:int sum()
    {
        a=10;
        b=20;
        cout<<a+b;
    }
};
int main()
{
    top k;
    k.sum();
}