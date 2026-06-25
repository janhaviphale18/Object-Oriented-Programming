#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
};
int main()
{
    Student s[3];
    for (int i = 0 ; i < 3 ; i++)
    {
        cout << "Enter Name: ";
        cin >> s[i].name;

        cout << "Enter Age: ";
        cin >> s[i].age;
    }
    cout << "\nStudent Details\n";
    for (int i = 0 ; i < 3 ; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Age: " << s[i].age << endl;
    }
    return 0;
}