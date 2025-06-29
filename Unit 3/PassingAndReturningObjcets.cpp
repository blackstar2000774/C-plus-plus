#include <iostream>

using namespace std;
class Complex
{
public:
    int real, img;
    void getData()
    {
        cout << "Enter the values of real and imaginary" << endl;
        cin >> real >> img;
    }
    void display()
    {
        cout << "(" << real << "+" << img << "i)" << endl;
    }
    Complex addComplex(Complex c1, Complex c2)
    {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
    }
    Complex &addComplex(Complex &c) // what if const Complex &c
    {
        c.real = real + c.real;
        c.img = img + c.img;
        return c;
    }
    Complex *addComplex(const Complex *c)
    {
        cout << "I am this pointer" << endl;
        this->real = real + c->real;
        this->img = img + c->img;
        return this;
    }
    Complex *addComplex(Complex *c)
    {
        cout << "I am not this pointer" << endl;
        c->real = real + c->real;
        c->img = img + c->img;
        return c;
    }
    // c2.addComplex(c1), real and img belongs to c2 and c is c1
};
int main(void)
{
    Complex c1, c2, c3;
    Complex *temp = new Complex();
    c1.getData();
    c2.getData();
    temp = c2.addComplex(&c1);
    cout << "Addition of two complex number is using pointer:" << endl;
    temp->display();
    c3 = c2.addComplex(c1);
    cout << "Addition of two complex number is using reference:" << endl;
    c3.display();
}