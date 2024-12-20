#include<iostream>
using namespace std;
class virus
{
    public:void affect()
    {
        cout<<"Virus is affecting the system"<<"\n";
        }
};
class Reward     // composite
{
    virus v;
    public:void reward()
    {
        cout<<"U won $2000000"<<"\n";
        v.affect();
    }
};
int main()
{
    Reward r;
    r.reward();
}