// Scope Resolution Operator
// The scope resolution operator (::) is used to define the scope of a variable or function.
#include <iostream>
using namespace std;
int x = 3; // Global variable
int main() {
  	// Local x
    int x = 10;
  	// Printing the global x
    cout << ::x;
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl; // Scope resolution operator
    return 0;
}