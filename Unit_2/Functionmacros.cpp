#include<iostream>
using namespace std;
#define MIN(a,b) ((a<b)?a:b)//ternary operator
#define EVENODD(x) ((x%2==0)?"Even":"Odd")

int main(void)
{
    int a,b,n;
    cout<<"Enter the value of a,b & n:" <<endl;
    cin>>a>>b>>n;
    cout << "Minimum("<<a<<","<<b<<")="<<MIN(a,b)<<endl;
    cout<<"Number " << n << " is " << EVENODD(n) << endl;
}