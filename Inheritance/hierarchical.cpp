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
    void showStudent()
    {
        cout << "Student Name: " << name << endl;
    }
};

class Teacher : public Person
{
public:
    void showTeacher()
    {
        cout << "Teacher Name: " << name << endl;
    }
};

int main()
{
    Student s1;
    Teacher t1;

    s1.setName("Janhavi");
    t1.setName("Mehta");

    s1.showStudent();
    t1.showTeacher();

    return 0;
}