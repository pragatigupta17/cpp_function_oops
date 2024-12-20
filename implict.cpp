#include<iostream>
using namespace std;
class top
{
    public:top() // implict calling
    {
        cout<<"CYBROM"<<"\n";
    }
    public:void Show() //explict calling
    {
        cout<<"CYBROM ZONE2";
    }
};
int main()
{
    top t1;
    t1.Show();
}

}