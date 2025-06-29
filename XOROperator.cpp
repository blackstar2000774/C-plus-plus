#include<iostream>
using namespace std;
class XOR
{
    public:
    int data;
    XOR(int data =0)
    {
        this->data = data;
    }
    XOR operator^(XOR x) const
    {
        x.data = data ^ x.data;//XORing operation between two data
        return x;
    }
};

int main(void)
{
    XOR x1(8),x2(15),x3;
    x3=x1^x2;
    cout<<x3.data<<endl;
}