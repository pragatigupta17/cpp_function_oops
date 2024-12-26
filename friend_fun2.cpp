#include<iostream>
using namespace std;
class student2;
class student1
{
    int marks=90;
    friend void cmp(student1,student2);
};
class student2
{
int marks=80;
friend void cmp(student1,student2);
};
void cmp(student1 s1,student2 s2)
{
if(s1.marks>s2.marks)
{
    cout<<"highest marks of s2="<<"\n";
}
}
int main()
{
    student1 a1 ;
    student2 a2;
    cmp(a1,a2); 
}


