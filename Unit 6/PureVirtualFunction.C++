#include<iostream>

using namespace std;

class Student
{
    public:
    virtual void display()=0; // pur virtual fucniton class is abstract
};
class StudentVedas : public Student{
    public:
    void display()
    {
        cout<< "I am Vedas student"<<endl;
    }
};
class StudentAmbition : public Student{
    public:
    void display()
    {
        cout<< "I am ambition student"<<endl;
    }
};
int main(void)
{
    Student *p1;
    // Student stobj; //object is not allowed
    StudentVedas sv;
    StudentAmbition sa;
    p1 = &sv;
    p1 -> display();
    p1 = &sa;
    p1 -> display();
}