#include<iostream>
using namespace std;
class Multiplication
{
public:
    int data;
    Multiplication(int data=0)//default constructor
    {
        this->data = data;
    }
    Multiplication* operator()(const Multiplication m)
    {
        this->data = this->data * m.data;
        return this;
    }
};

int main(void)
{
    Multiplication mul1, mul2, *mul3;
    cout << "Enter dat of mul1 and mul2" << endl;
    cin>> mul1.data >> mul2.data;
    mul3 = mul1(mul2);
    cout << "Result\t" << mul3->data << endl;
}