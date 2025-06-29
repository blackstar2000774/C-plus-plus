#include<iostream>
#include<string>//for strcmp
#define SIZE 20
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;
    void getData(){
        cout<<"Enter the name of the Employees"<<endl;
        cin>>name;
        cout<<"Enter id of an employee"<<endl;
        cin>>id;
        cout<<"Enter the salary"<<endl;
        cin>>salary;
    }
    void sorting(Employee emp[],int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                //using emp pointer,if(strcmp(*(emp+i)->nmae),*(emp+j)->name)>0){}
                Employee temp;
                if (emp[i].name.compare(emp[j].name)>0)
                {
                    temp=emp[i];
                    emp[i]=emp[j];
                    emp[j]=temp;
                }
            }
        }
        display(emp,n);
    }
    void display(Employee emp[],int n)
    {
        cout<<"id\t"<<"name\t"<<"salary"<<endl;
        for(int i=0;i<n;i++)
        cout <<emp[i].id<<"\t"<<emp[i].name<<"\t"<<emp[i].salary<<endl;
    }
};
int main(void)
{
    int n;
    Employee emp[SIZE],temp;
    cout<<"Enter how many employees?"<<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        emp[i].getData();
    }
    temp.sorting(emp,n);//it calls sorting function
}