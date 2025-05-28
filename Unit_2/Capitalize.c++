#include<iostream>

using namespace std;
char toCapital(char *c)
{
    if (*c >= 97 && *c <= 122)
    {
        *c=*c-32;
    }
    return *c;
}
string toCapital(string &s)
{
    int i=0;
    do
    {
        s[i] = toCapital(&s[i]);//calls char toCapital (char *c)
        i++;
    } while (s[i]!='\0');//\0 null character
    return s;
}
int main(void)
{
    string name;
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    cout<<"My name in capital form is="<< toCapital(name)<<endl;
}