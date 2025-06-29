#include<iostream>
using namespace std;
class Complex{
    public:
        int real, img;
        Complex* addComplex(const Complex* c){//c=&c1
           this->real = this->real+c->real;
           this->img = this->img+c->img;
           return this; //c is a memory address of object c1
        }
        void display(){
            cout<<real<<"+i"<<img<<endl;
        }
        void getData(){
            cout<<"Enter the values of real and imaginary"<<endl;
            cin>>real>>img;
        }
};
int main(void){
    Complex c1,c2;
    Complex *c3=new Complex();//because this is used in run time
    c1.getData();
    c2.getData();
    c3=c2.addComplex(&c1);
    c3->display();
}