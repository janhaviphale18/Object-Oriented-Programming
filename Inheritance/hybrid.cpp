#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void setName(string n)
    {
        name = n;
    }
};

class Marks
{
public:
    int score;

    void setScore(int s)
    {
        score = s;
    }
};

class Student : public Person
{
public:
    void showStudent()
    {
        cout << "Student Name: " << name << endl;
    }
};

class Result : public Student, public Marks
{
public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
    }
};

int main()
{
    Result r1;

    r1.setName("Janhavi");
    r1.setScore(95);

    r1.display();

    return 0;
}