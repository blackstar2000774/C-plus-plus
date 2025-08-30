#include<iostream>
using namespace std;
class Car{
    protected:
    int wheels;
    public:
    Car(int w = 4) : wheels(w) {
    }
};
class Maruti : public Car {
protected:
    void vehicleType() {
        cout << "Vehicle Type: Car" << endl;
    }
    void speed() {
        cout << "Speed: 80 km/hr" << endl;
    }
public:
    Maruti() : Car() {
    }
};

class Maruti800 : public Maruti {
public:
    void speed() {
        cout << "Maruti 800 Speed: 70 km/hr" << endl;
    }
};
int main() {
    Maruti800 obj;
    obj.vehicleType();
    obj.speed();
    return 0;
}