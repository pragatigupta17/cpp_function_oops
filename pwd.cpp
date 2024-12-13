#include<iostream>
using namespace std;
int roi()
{
    return 3;
}
int balance (int pwd)
{
    if (pwd == 203)
    {
        return 1000;
    }
    else{
        return -1;
    }
}
int main()
{
    cout<<balance(203);
}