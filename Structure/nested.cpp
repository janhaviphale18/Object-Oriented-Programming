#include <iostream>
using namespace std;

struct Address
{
    string city;
    int pin;
};
struct Student
{
    string name;
    int age;
    Address add;
};
int main()
{
    Student s1;

    cout << "Enter Name: ";
    cin >> s1.name;
    cout << "Enter Age: ";
    cin >> s1.age;
    cout << "Enter City: ";
    cin >> s1.add.city;
    cout << "Enter Pin: ";
    cin >> s1.add.pin;

    cout << "\nStudent Details\n";
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "City: " << s1.add.city << endl;
    cout << "Pin: " << s1.add.pin << endl;

    return 0;
}