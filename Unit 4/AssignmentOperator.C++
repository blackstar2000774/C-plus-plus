#include<iostream>
#include<string>
using namespace std;
class CopyString
{
    private:
    string name;

    public:
    //CopyString(const string &str="") : data(str) {}
    CopyString(string str = "")
    {
        name = str;
    }

    CopyString *operator=(const CopyString* other)
    {
        if (this->name==other->name)
        {
            return this;
        }
        this->name = other->name;
        return this;
    }

    void print()
    {
        cout<<"\n"<<name<<endl;
    }
};

int main(void)
{
    CopyString s1("Gajendra");
    CopyString *s2;
    s2 = &s1;
    s2->print();
}