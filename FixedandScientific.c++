#include <iostream> 
#include <iomanip> 
using namespace std; 
int main(void) 
{ 
    float pi = 3.1415926535897932; 
    int a = 345;
    cout << "Fixed value is " << fixed << setprecision(4) << pi<< endl; 
    cout <<"Scientific or expontential value " << scientific << pi <<endl; 
    cout <<"hexadecimal of " << a << " is = " << hex << a << endl ;
    cout <<"Octal of " << a << " is = " << oct << a << endl;
}