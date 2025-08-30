#include <iostream>
using namespace std;
class Bank
{
private:
    int accountnumber;
    friend int accessAcNumber(Bank);

public:
    Bank(int ac = 0) : accountnumber(ac)
    {
    }
};
int accessAcNumber(Bank b)//this function is not bind with any objects because it is defined outside the class
{
    return b.accountnumber;
}
int main(void)
{
    Bank b1(122345);
    cout << "your bank account is = " << accessAcNumber(b1) << endl;
}
