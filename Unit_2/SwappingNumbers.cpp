#include<iostream>

using namespace std;
void swap(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main(void)
{
    int a,b;
    cout<<"Enter the value of a & b:"<<endl;
    cin>>a>>b;
    cout<<"a,b before swapping using reference("<<a<<","<<b<<")"<<endl;
    swap(a,b);
    cout<<"After Swapping uisng reference("<<a<<","<<b<<")"<<endl;
    swap(&a,&b);
    cout<<"After Swapping uisng reference("<<a<<","<<b<<")"<<endl;
}