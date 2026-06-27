#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    Student()
    {
        age = 19;
    }

    friend class Teacher;
};

class Teacher
{
public:
    void show(Student s)
    {
        cout << "Student Age: " << s.age << endl;
    }
};

int main()
{
    Student s1;
    Teacher t1;

    t1.show(s1);

    return 0;
}