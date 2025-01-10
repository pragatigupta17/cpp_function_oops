#include<iostream>
using namespace std;
class Company
{
    public:virtual void empinfo() final
    {
        cout<<"Employee Information"<<"\n";
    }
};
class BhopalBranch:public Company
{
    public:void empinfo()
    {
        cout<<"\n Bhopal Branch"<<"\n";
    }
};
int main()
{
    BhopalBranch p;
    p.empinfo();

}