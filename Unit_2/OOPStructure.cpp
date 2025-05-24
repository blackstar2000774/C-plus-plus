#include<iostream>
#include<math.h>
using namespace std;
class MathOperation//class definition
{
public:`    `   qwde
const float PI = 3.14;//member variable
int factorial(int n)//member function
{
    if (n==0||n==1)
    {
        return 1;
    }
    return n * factorial(n-1);
}
float areaCircle(float rad)
{
    return PI*powf(rad,2);
}
};//class definition closed
int main(void)//main  function
{
MathOperation mop; //Object of a class
int num;
cout<<"Enter the value of num: "<<endl;
cin>>num;
cout<<"The factorial of "<<num<<"="<<mop.factorial(num)<<endl;
cout<<"The area of "<<num<<"="<<mop.areaCircle(num)<<endl;
}