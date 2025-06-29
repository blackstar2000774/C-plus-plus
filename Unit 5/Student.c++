#include<iostream>
using namespace std;
class Student
{
    private:
    char name[20];
    char address[30];
    public:
    void Student_Getdata()
    {
        cout<<"Enter Name and Address:";
        cin>>name>>address;
    }
    void Student_Putdata()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Address:"<<address<<endl;
        }
};
class UnderGraduateStudent : public Student
{
    private:
    char faculty[6];

    public:
    void Student_GetRecord()
    {
        Student::Student_Getdata();//function call
        cout<<"Enter your faculty(eg. BSc. CSIT/BBM/BCA..):"<<endl;
        cin>>faculty;
    }
    void Student_Record_Display()
    {
        Student::Student_Putdata();//function call
        cout<<"\nFaculty:"<<faculty;
    }
};
class GraduateStudent : public Student
{
    private:
    char faculty[5];
    char thesis_on[30];

    public:
    void Student_GetRecord()
    {
        Student::Student_Getdata();//function call
        cout<<"Enter your faculty(eg. MSc CSIT/MBA/MCA...):";
        cin>>faculty;
        cout<<"Enter your Thesis Subject:";
        cin>>thesis_on;
    }
    void Student_Record_Dispaly()
    {
        Student::Student_Putdata();//function call
        cout<<"\nFaculty:"<<faculty;
        cout<<"\nThis Subject:"<<thesis_on;
    }
};
int main(void)
{
    UnderGraduateStudent U_obj;
    GraduateStudent G_obj;
    U_obj.Student_GetRecord();
    U_obj.Student_Record_Display();
    G_obj.Student_GetRecord();
    G_obj.Student_Record_Dispaly();
}