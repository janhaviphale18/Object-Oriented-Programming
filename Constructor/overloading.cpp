#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student()
    {
        name = "Unknown";
        age = 0;
    }

    Student(string n)
    {
        name = n;
        age = 0;
    }

    Student(string n, int a)
    {
        name = n;
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
    Student s2("Janhavi");
    Student s3("Riya", 20);

    cout << "Student 1" << endl;
    s1.display();

    cout << "\nStudent 2" << endl;
    s2.display();

    cout << "\nStudent 3" << endl;
    s3.display();

    return 0;
}