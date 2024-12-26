#include<iostream>
using namespace std;
class dp
{
    public:dp()
    {
        cout<<"memory allocated\n";

    }
    ~dp()
    {
        cout<<"memory released";
    }
    void show()
    {
        cout<<"\n welcome\n";
    }
};
int main()
{
    dp d1;
    d1.show();
}
//  DISTRUCTOR ==> IT release  the memory which is allocated by the constructor memory of object