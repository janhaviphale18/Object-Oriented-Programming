#include <iostream>
using namespace std;

struct Student
{
    string name;
    int prn;
    int marks;
};
int main()
{
    Student s1 , s2;
    s1.name = "Janhavi";
    s1.prn = 19;
    s1.marks = 82;

    s2.name = "Krishna";
    s2.prn = 101;
    s2.marks = 70;

    cout << "Student 1 Name: " << s1.name << endl;
    cout << "Student 1 PRN: " << s1.prn << endl;
    cout << "Student 1 Marks: " << s1.marks << endl;

    cout << "Student 1 Name: " << s2.name << endl;
    cout << "Student 1 PRN: " << s2.prn << endl;
    cout << "Student 1 Marks: " << s2.marks << endl;

    return 0;
}