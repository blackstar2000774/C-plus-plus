#include<iostream>
using namespace std;
class Complex{
    public:
        int real, img;
        Complex addComplex(Complex c1, Complex c2){
           Complex temp;
           temp.real=c1.real+c2.real;
           temp.img=c1.img+c2.img;
           return temp; 
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
    c3=c3.addComplex(c1,c2);
    c3.display();
}