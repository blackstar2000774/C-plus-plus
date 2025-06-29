#include <iostream>

using namespace std;

struct Employee
{
    int a,b;//default public
};
class Student
{
    public:
    int a,b;//default private
};
typedef struct Employee EMP;
typedef Student STUD;
int main(void)
{
    EMP emp;
    STUD st;
    emp.a=24;
    emp.b=35;
    st.a=45;
    st.b=56;
}