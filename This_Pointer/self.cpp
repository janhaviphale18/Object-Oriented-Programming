#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void setData(string name, int age)
    {
        this->name = name;
        this->age = age;
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

    s1.setData("Janhavi", 19);
    s1.display();

    return 0;
}