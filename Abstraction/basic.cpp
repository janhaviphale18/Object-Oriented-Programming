#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    void showAge()
    {
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.setAge(19);
    s1.showAge();

    return 0;
}