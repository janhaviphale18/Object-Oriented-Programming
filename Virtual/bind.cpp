#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal *ptr;
    Dog d1;

    ptr = &d1;

    ptr->sound();

    return 0;
}