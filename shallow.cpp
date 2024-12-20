#include<iostream>
using namespace std;
class Student 
{
    int rno;
    public: Student(int rno)
    {
        this->rno = rno;
        }
        void display()
        {
            cout<<"Roll No: "<<rno;
        }
};
int main()
{
    Student s(10);
    cout<<"Student Roll No: ";
    s.display();


    }
