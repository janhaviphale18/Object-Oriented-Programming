#include <iostream>
using namespace std;

struct Student
{
    string name;
    int prn;
    float marks;
};
int main()
{
    Student s1;
    cout << "Enter Name: ";
    cin >> s1.name;
    cout << "Enter PRN: ";
    cin >> s1.prn;
    cout << "Enter Marks: ";
    cin >> s1.marks;

    cout << "\nStudent Details" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "PRN: " << s1.prn << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}