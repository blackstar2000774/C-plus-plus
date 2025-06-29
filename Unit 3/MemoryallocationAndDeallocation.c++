#include<iostream>

using namespace std;
class Person
{
public:
int id;
string name;
float marks;
    Person()//is called when objects are created
    {
        cout<<"Memory allocated"<<endl;
    }
    ~Person()//is called when objects are deleted
    {
        cout<<"Memory de-allocated"<<endl;
    }
};

int main()
{
    //Person p[5];//compile time memory allocation in stack memory
    Person *ptr = new Person[5];//runtime memory allocation in heap memory
    /*for (int i = 0; i < 5; i++)
    delete ptr;*/
    delete [] ptr;//it deletes the array of pointers
}