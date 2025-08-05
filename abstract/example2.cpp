#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "Base class show function called." << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "Derived class show function called." << endl;
    }
};
int main()
{
    derived d;
    base *b;
    b = &d;
    b->show();
    d.base::show();
    return 0;
}