#include<iostream>
using namespace std;

class Room
{
    protected:
    int length, breadth;
    Room( int length, int breadth)
    {
        cout<<"Base Constructor Called"<<endl;
        this->length=length;
        this->breadth=breadth;
    }
    public:
    int area(){
        return length*breadth;
    }
};
class Kitchen:public Room
{
    public:
    int height;
    Kitchen(int length, int breadth, int height):Room(length,breadth)
    {
        //in java, super(length,breadth)
        cout<<"Derived Constructor called"<<endl;
        this->height=height;
    }
    int volume(){
        return length*breadth*height;
    }
};
int main(void)
{
    Kitchen kroom(3,4,5);
    cout<<"Area="<<kroom.area()<<endl;
    cout<<"Volume="<<kroom.volume()<<endl;
}