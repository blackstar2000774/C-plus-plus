#include<iostream>
using namespace std;
class OneClass
{
public:
    void print()
    {
        cout<< "I am from One Class"<<endl;
    }
};

class AnotherClass
{
    private:
    OneClass *ptr;

    public:
    //AnotherClass(MyData *p) : ptr(p) {}, we can initialize
    AnotherClass(OneClass *p)
    {
        ptr = p;
    }

    OneClass *operator->()
    {
        return ptr;
    }
};

int main(void)
{
    OneClass *data = new OneClass();
    AnotherClass aptr(data);
    aptr->print();//Calls print() through the overloaded 
}