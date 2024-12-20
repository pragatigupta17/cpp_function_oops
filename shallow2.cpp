#include<iostream>
using namespace std;
class Student 
{
    public:int r;
    public:Student(int rno)
    {
        r=rno;
    }
    void display()
    {
        cout<<"Roll No. is "<<r;
    }
};
int main()
{
    Student s(10);
    s.display();
    Student s2(s);
    s2.display();

}