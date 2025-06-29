#include<iostream>
using namespace std;
class Complex{
    public:
        int real, img;
        Complex& addComplex(Complex& c){
           c.real = real+c.real;
           c.img = img+c.img;
           return c; 
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
    Complex c1,c2,c3;
    c1.getData();
    c2.getData();
    c3=c2.addComplex(c1);
    c3.display();
}