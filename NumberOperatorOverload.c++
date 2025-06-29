#include<iostream>

using namespace std;
class Number{
    public:
    int data;
    void display()
    {
        cout<<"The sum of two objects="<<data<<endl;
    }
    Number* operator+(Number nobj)
    {
        this->data= this->data + nobj.data;
        return this;
    }
};
int main(void){
    Number n1,n2,*n3;
    n1.data=24;
    n2.data=36;
    n3 = n1+n2;// compiler treat as n1.operator+(n2)
    n3->display();
    return 0;
}