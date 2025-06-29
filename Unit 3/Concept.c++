#include<iostream>
#include<iomanip>
using namespace std;
class MAthematicalOperations
{
    public:
    int a,b;//instance variables, accessed only by objects
    int summation(int,int);
    int subtraction(int,int);
    int multiplication(int,int);
    double division(int,int);
};
int MAthematicalOperations::summation(int a, int b)
{
    //this pointer
    this->a=a;
    this->b=b;
    return (a+b);
}
int MAthematicalOperations::subtraction(int a, int b)
{
    //this pointer
    this->a=a;
    this->b=b;
    return (a-b);
}
int MAthematicalOperations::multiplication(int a, int b)
{
    //this pointer
    this->a=a;
    this->b=b;
    return (a*b);
}
double MAthematicalOperations::division(int a, int b)
{
    //this pointer
    this->a=a;
    this->b=b;
    return (double(a/b));//type cating int to double
}
int main(void)
{
    MAthematicalOperations op;
    int a,b;
    cout << "Enter the values of a & b:"<< endl;
    cin>>a>>b;
    cout<<"Summation="<<op.summation(a,b)<<endl
    <<"subtraction="<<op.subtraction(a,b)<<endl
    <<"multiplication="<<op.multiplication(a,b)<<endl
    <<"and division="<<fixed<<setprecision(5)<< op.division(a,b)<<endl;
}