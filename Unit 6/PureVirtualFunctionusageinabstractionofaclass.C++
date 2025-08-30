#include <iostream>
using namespace std;

class Room
{
public:
    virtual int volume() = 0;

public:
    int length, breadth;
    Room(int length, int breadth)
    {
        cout << "Base Constructor called" << endl;
        this->length = length;
        this->breadth = breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
class Kitchen : public Room
{
public:
    int height;
    Kitchen(int length, int breadth, int height) : Room(length, breadth)
    {
        // in java, super(lenght,breadth)
        cout << "Derived Constructor called" << endl;
        this->height = height;
    }

public:
    int volume()//prototype is in base class
    {
        return length * breadth * height;
    }
};
int main(void)
{
    // Room rm;// not allowed due to abstract class made by pure virtual function
    Room *room = new Kitchen(3, 4, 5);
    cout << "Area=" << room->area() << endl;
    cout << "Volume=" << room->volume() << endl;
}