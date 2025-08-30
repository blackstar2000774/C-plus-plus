#include <iostream> 
using namespace std; 
class library { 
private: 
    int no_of_books; 
public: 
    library() { 
        no_of_books = 500; 
    } 
    friend class librarian; //librarian is a friend class 
    friend class student; //we can give access to student as well in library
}; 
class librarian 
{ 
public: 
    void function1(library l) 
    { 
        cout << "Your data is:" << l.no_of_books; //private member accessible 
    } 
}; 
class student 
{
    public:
    void function1(library 1){
        cout<<"Your data is:"<< l.no_of_books; //private member accessible 
    }
};
int main(void) { 
    library l1; 
    librarian l; 
    l.function1(l1); 
    s.function1(l1);
    l.function1(l1);
}