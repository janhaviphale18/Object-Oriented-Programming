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

class Student : public Person, public Marks
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
    Student s1;

    s1.setName("Janhavi");
    s1.setScore(95);

    s1.display();

    return 0;
}