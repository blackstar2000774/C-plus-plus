#include<iostream>
using namespace std;

class Base
{
    public:
    virtual ~Base()
    {
        cout << "Virtual Destructor" << endl;
    }
};
class Derived : public Base
{
    public:
    ~Derived()
    {
        cout << "Derived Destructor" << endl;
    }
};
int main(void)
{
    Base *bptr;
    bptr = new Derived();//Upcasting
    delete bptr; // Calls the destructor of Derived first, then Base
}