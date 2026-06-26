#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor called" << endl;
    }

    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    cout << "Start of main" << endl;

    {
        Student s1;
        cout << "Inside block" << endl;
    }

    cout << "Outside block" << endl;

    return 0;
}