#include<iostream>

using namespace std;

namespace Semester2{
    void oop(){
        cout << "We study C++ as oop" <<endl;
    }
};
namespace Semester7{
    void oop()
    {
        cout << "We study adv. java as oop" <<endl;
    }
};
int main(void)
{
    
    Semester2::oop();//function is visible using scope resolution operator
    Semester7::oop();//function is visible using scope resolution operator
}