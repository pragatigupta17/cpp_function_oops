#include<iostream>
using namespace std;
class top
{
    int a=10;
    int b=20;
    public:void show()
    {
        cout<<"a+b"<<"\n";
    }
};
class top2
{
    int c=30;
    int d=40;
    public:void multi()
    {
        cout<<"c*d"<<"\n";
    }
};
int main()
{
    top t;
    t.show();
    top2 t2;
    t2.multi();
}
