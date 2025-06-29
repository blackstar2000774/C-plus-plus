#include <iostream>
#include <math.h> //abs()
using namespace std;
class Time
{
public:
    int h, m, s;
    Time difference(Time &, Time &);  // prototype
    Time *difference(Time *, Time *); // prototype
    void displayTime();               // prototype
};
Time Time::difference(Time &t1, Time &t2)
{
    Time t3;
    int s1 = t1.h * 3600 + t1.m * 60 + t1.s;
    int s2 = t2.h * 3600 + t2.m * 60 + t2.s;
    int dsec = abs(s1 - s2);
    t3.h = dsec / 3600;       // hours
    int remsec = dsec % 3600; // remaing seconds
    t3.m = remsec / 60;
    t3.s = remsec % 60;
    return t3;
}
Time *Time::difference(Time *t1, Time *t2)
{
    Time *t3 = new Time(); // memory created at execution or run time
    int s1 = t1->h * 3600 + t1->m * 60 + t1->s;
    int s2 = t2->h * 3600 + t2->m * 60 + t2->s;
    int dsec = abs(s1 - s2);
    t3->h = dsec / 3600;      // hours
    int remsec = dsec % 3600; // remaing seconds
    t3->m = remsec / 60;
    t3->s = remsec % 60;
    return t3;
}
void Time::displayTime()
{
    cout << h << " hr:" << m << " min:" << s << " sec" << endl;
}
int main(void)
{
    Time t1, t2, t3;
    Time *temp = new Time();
    cout << "Enter the hour,min and seconds of t1" << endl;
    cin >> t1.h >> t1.m >> t1.s;
    t1.displayTime();
    cout << "Enter the hour,min and seconds of t2" << endl;
    cin >> t2.h >> t2.m >> t2.s;
    t2.displayTime();
    t3 = t3.difference(t1, t2);
    temp = temp->difference(&t1, &t2);
    temp->displayTime();
    t3.displayTime();
}