#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    Student(int a)
    {
        age = a;
    }

    friend void show(Student s);
};

void show(Student s)
{
    cout << "Age: " << s.age << endl;
}

int main()
{
    Student s1(19);

    show(s1);

    return 0;
}