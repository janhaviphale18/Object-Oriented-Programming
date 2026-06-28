#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void setName(string n)
    {
        name = n;
    }
};

class Student : public Person
{
public:
    int age;

    void setAge(int a)
    {
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.setName("Janhavi");
    s1.setAge(19);

    s1.display();

    return 0;
}