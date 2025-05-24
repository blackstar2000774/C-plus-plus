#include<iostream>
using namespace std;//std folder or package or namespace
int factorial(int); // prototypes
int main(void){
    int n;
    cout<<"Hello Sem 2"<<endl;//printf("hello\n");
    cout<<"Enter the value of n:"<<endl;
    cin>>n;//taking input from keyboard
    cout<<factorial(n)<<endl;
}
int factorial(int n){
    if(n==0||n==1)
    return 1;
    return n * factorial(n-1);
}