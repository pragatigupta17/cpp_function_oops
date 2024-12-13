#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int &b=a; // & it refer the address of another variable address share (b a k int address ko belong karega)
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b<<"\n";

}