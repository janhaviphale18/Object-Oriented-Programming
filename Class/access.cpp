#include <iostream>
using namespace std;

class Student
{
public:
    string name;

private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Janhavi";
    s1.setAge(19);

    s1.show();

    return 0;
}