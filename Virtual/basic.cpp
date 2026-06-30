#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void show()
    {
        cout << "Parent class function" << endl;
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class function" << endl;
    }
};

int main()
{
    Parent *ptr;
    Child c1;

    ptr = &c1;

    ptr->show();

    return 0;
}