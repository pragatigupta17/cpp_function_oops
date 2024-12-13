#include<iostream>
using namespace std;
void cybrom(int a)
{
    if(a<1)
{
return;
}
cout<<a<<"\t";
cybrom(a-1);
int main()
{
    cybrom(5);
}
}
