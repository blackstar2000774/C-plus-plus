#include<iostream>
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    float salary;
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
    string display(string);
    //string Employee::display(string name)
};
string Employee::display(string name)
{
    name = toCapital(name);
}
int main(void)
{
    Employee emp;
    int id,n;
    string name;
    float salary;
    cout<<"Enter the id of an employee: "<< endl;
    cin>>emp.id;
    cout<<"Enter the salary of an employee: "<< endl;
    cin>>emp.salary;
    cout<<"Enter the name of an employee: "<< endl;
    getline(cin,emp.name);
    cin.ignore();
    cout<<"My name is "<<emp.display(emp.name)<<" of id "<<emp.id<<" having salary ="<<emp.salary<<endl;
}