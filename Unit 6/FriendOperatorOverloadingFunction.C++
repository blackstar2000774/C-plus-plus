#include <iostream> 
using namespace std; 
class UnaryFriend 
{ 
    int a = 10; 
    int b = 20; 
 
public: 
    void getvalues() 
    { 
        cout << "Values of A, B & C\n"; 
        cout << a << "\n" 
             << b << "\n" 
             << endl; 
    } 
    void show() 
    { 
        cout << a << "\n" 
             << b << "\n" 
             << endl; 
    } 
    void friend operator--(UnaryFriend &x); //Pass by reference 
}; 
void operator--(UnaryFriend &x) 
{ 
    x.a = --x.a; //Object name must be used as it is a friend function 
    x.b = --x.b; 
} 
int main(void) 
{ 
    UnaryFriend x1; 
    x1.getvalues(); 
    cout << "Before Overloading\n"; 
    x1.show(); 
    cout << "After Overloading \n"; 
    --x1; //operator overloaded 
    x1.show(); 
} 