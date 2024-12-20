#include<iostream>
using namespace std;
class ATM
{
    public:ATM(int u , int p)
    {
        if (u== 1111 && p== 2024)
        {
        cout<<"Welcome to the ATM"<<"\n";
    }
    else
    {
        cout<<"Invalid user id or password"<<"\n";
    }
}
    };
int main()
    {
        int acno,pwd;
        cout<<"Enter your account number: "<<"\n";
        cin>>acno;
        cout<<"Enter your account password:"<<"\n";
        cin>>pwd;
        ATM atm(acno,pwd);
}