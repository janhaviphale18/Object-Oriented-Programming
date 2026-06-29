#include <iostream>
using namespace std;

class Number
{
public:
    int value;

    Number(int v)
    {
        value = v;
    }

    void operator ++()
    {
        value++;
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Number n1(10);

    ++n1;

    n1.display();

    return 0;
}