#include<iostream>
#include<math.h>
using namespace std;

//function overloading: same function is overloaded on the basis of:
//1. different number of parameters
//2. differnet data types of parameters
int area(int);
int area(int, int);
double area(double);
int main(void)
{
    int l,b;
    double r;
    cout<<"Enter the values sof l,b and r"<<endl;
    cin>>l>>b>>r;
    cout<<"Area of square="<<area(l)<<endl;
    cout<<"Area of rectangle="<<area(l,b)<<endl;
    cout<<"Area of circle="<<area(r)<<endl;
}
int area(int  l)
{//square
    return l*l;
}
int area(int l,int b)
{//rectangle
    return l*b;
}
double area(double r)
{//circle
    return 3.14*pow(r,2);
}