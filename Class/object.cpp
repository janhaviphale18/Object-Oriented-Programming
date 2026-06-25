#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{
    Student s1, s2;

    s1.name = "Janhavi";
    s1.age = 19;

    s2.name = "Riya";
    s2.age = 20;

    cout << "Student 1" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;

    cout << "\nStudent 2" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;

    return 0;
}