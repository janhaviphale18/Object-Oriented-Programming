#include <iostream>
using namespace std;

class Student
{
public:
    int age;

    Student& setAge(int age)
    {
        this->age = age;
        return *this;
    }

    void display()
    {
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.setAge(19).display();

    return 0;
}