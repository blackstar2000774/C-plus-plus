#include<iostream>

using namespace std;
class Student
{//class definition
public:
    static int count;
    Student()
    {//constructor called when object is created
        count++;
    }
    int getCount();//prototype of signature
};
int Student::count=0;//no need to set static property if set once
int Student::getCount()//function definition
{
    return count;
}
int main(void)
{
    Student s1;//constructor is called
    Student s2;//constructor is called
    Student s3;//constructor is called
    cout<<"No of objects="<<s3.getCount()<<endl;
}