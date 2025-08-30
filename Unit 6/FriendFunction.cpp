#include<iostream>
using namespace std;

class Distance
{
    private:
    int meter;
    //friend function declaration
    friend int addFive(Distance);
    public:
    Distance() : meter(0) {}
};
//friend function definition
int addFive(Distance d)
{
    //accessing private members with the help of friend function
    d.meter += 5;
    return d.meter;
}
int main(void)
{
    Distance D;
    cout << "Distance: " << addFive(D) << endl;
}