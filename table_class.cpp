// table using parametrized constructor
#include<iostream>
using namespace std;
class cybrom
{
    public :cybrom (int a)
    {
        for(int i=1;i<=10;i++)
        {
            cout<<a*i<<endl;
        }
    }
};
int main()
{
    cybrom obj (5);
}
