#include<iostream>

using namespace std;
class Base{
    public:
    int data=40;
    void display(){
        cout<<"Data="<<data<<endl;
    }
};
class Derived:public Base{};
int main(void){
    Derived d;
    d.display();
}