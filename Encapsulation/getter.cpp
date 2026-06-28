#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    void setData(string n, int a)
    {
        name = n;
        age = a;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s1;

    s1.setData("Janhavi", 19);

    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;

    return 0;
}