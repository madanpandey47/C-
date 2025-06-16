#include <iostream>
using  namespace  std;
// method overloading same different signature
// method overriding  ---parent implement override

class Base{
public:
    virtual void sum()
    {
        cout<<"Sum method from Parent";
    }
};

class Child:public  Base{
public:
    void sum() override
    {
        cout<<"Sum method from Child";
    }
};

int main()
{
    Child c;
    c.sum();
    return 0;
}