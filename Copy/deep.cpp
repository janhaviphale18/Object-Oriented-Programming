#include <iostream>
using namespace std;

class Student
{
public:
    int *age;

    Student(int a)
    {
        age = new int;
        *age = a;
    }

    Student(Student &s)
    {
        age = new int;
        *age = *s.age;
    }

    void display()
    {
        cout << "Age: " << *age << endl;
    }
};

int main()
{
    Student s1(19);

    Student s2 = s1;

    *s2.age = 25;

    cout << "Student 1" << endl;
    s1.display();

    cout << "Student 2" << endl;
    s2.display();

    return 0;
}