#include<iostream>
using namespace std;
class top1
{
    int a=10,b=90;
    public:void Sum()         //function overloading
    {
        cout<<"Sum of a and b is "<<a+b<<"\n";

    }
    void Sum(int k ,int p, int l)   // function overloading
    {
        cout<<k+p+l<<"\n";
        }
};
int main()
{
    top1 f;
    f.Sum();
    f.Sum(2,3,4);
}
