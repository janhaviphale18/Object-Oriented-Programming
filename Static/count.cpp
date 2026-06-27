#include <iostream>
using namespace std;

class Student
{
public:
    static int count;

    Student()
    {
        count++;
    }

    void show()
    {
        cout << "Current total objects: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    s1.show();

    Student s2;
    s2.show();

    Student s3;
    s3.show();

    return 0;
}