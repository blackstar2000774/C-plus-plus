#include<iostream>
using namespace std;

template <typename T>//or template <class T> both are same
class Base
{
    protected:
        T a,b;
};
class Derived : public Base<T>
{
    public:
        void initialize()
        {
            a = 25;
            b = 35;
        }
        void display()
        {
            cout << "a=" << a << ",b=" << b << endl;
        }
};
