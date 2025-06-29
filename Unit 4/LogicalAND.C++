#include<iostream>
using namespace std;
class Logical
{
public:
    bool status;
    Logical(bool status)
    {
        this->status = status;
    }
    bool operator&&(Logical lo)//Operator Overloading function
    {
        if (status && lo.status)
        {
            return true;
        }
        else
        return false;
    }
};
int main(void)
{
    Logical l1(true), l2(false);
    if(l1 && l2)
    cout<<"Condition is true"<<endl;
    else
    cout<< "Condition is false" <<endl;
}