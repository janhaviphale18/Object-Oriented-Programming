#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    Student(Student &s)
    {
        name = s.name;
        age = s.age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1("Janhavi", 19);
    Student s2(s1);

    cout << "Student 1" << endl;
    s1.display();

    cout << "\nStudent 2" << endl;
    s2.display();

    return 0;
}