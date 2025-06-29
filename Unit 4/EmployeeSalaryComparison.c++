#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    double salary;
public:
    Employee(string n, double s) : name(n), salary(s) {}

    // Overload > operator to compare salaries
    bool operator>(const Employee& other) const {
        return salary > other.salary;
    }

    // Overload < operator to compare salaries
    bool operator<(const Employee& other) const {
        return salary < other.salary;
    }

    // Overload == operator to compare salaries
    bool operator==(const Employee& other) const {
        return salary == other.salary;
    }

    void display() const {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee emp1("Alice", 50000);
    Employee emp2("Bob", 60000);

    cout << "Employee 1: ";
    emp1.display();
    cout << "Employee 2: ";
    emp2.display();

    if (emp1 > emp2)
        cout << "Employee 1 has a higher salary than Employee 2." << endl;
    else if (emp1 < emp2)
        cout << "Employee 2 has a higher salary than Employee 1." << endl;
    else
        cout << "Both employees have the same salary." << endl;

    return 0;
}