#include<iostream>

using namespace std;
class Marks
{
    int marks;
    public:
    Marks(int marks=0)
    {
        this->marks=marks;
    }
    void operator++()
    {
        cout<<"Pre-increment marks="<<++marks<<endl;
    }
    void operator++(int)
    {
        cout<<"Post-increment marks="<<marks++<<endl;
    }
};
int main(void)
{
    Marks m;
    ++m; // Pre-increment
    Marks m1(10);
    m1++; // Post-increment
    ++m1; // Pre-increment again
    return 0;
}