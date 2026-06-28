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
};

class Result : public Student
{
public:
    int marks;

    void setMarks(int m)
    {
        marks = m;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r1;

    r1.setName("Janhavi");
    r1.setAge(19);
    r1.setMarks(95);

    r1.display();

    return 0;
}