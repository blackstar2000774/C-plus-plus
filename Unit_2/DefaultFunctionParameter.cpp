#include<iostream>
using namespace std;
string display(string gender="male")//default parameter
{
    return gender;
}
int main(void)
{
    cout << "I am a "<< display("Female")<<endl;
}