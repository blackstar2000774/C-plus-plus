/*WAP to access the private data of a Bank with the help of friend class
BranchManager*/
#include <iostream>
using namespace std;
class Bank
{
private:
    int accountnumber;
    friend class BranchManager;

public:
    Bank(int ac = 0) : accountnumber(ac)
    {
    }
};
class BranchManager
{
public:
    void displayAccountNumber(Bank b)
    {
        cout << "Account Number: " << b.accountnumber << endl;
    }
};
int main(void)
{
    Bank b1(122345);
    BranchManager bm;
    bm.displayAccountNumber(b1);
}