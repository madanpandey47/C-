#include <iostream>
#include <string>
using  namespace std;

class Base{
public:
    Base()
    {
        cout<<"Base class constructor"<<endl;
    }
    Base(int x)
    {
        cout<<"Base class with single constructor"<<endl;
    }
    Base(int x,int y)
    {
        cout<<"Base class with double constructor"<<endl;
    }
};

class Derived:public Base{

public:
    Derived():Derived(10)
    {
   cout<<"Derived with No Arg Constructor";
    }

    Derived(int x):Base(10) // Delegating constructor
    //This will call the Base class constructor with single argument
    {
        cout<<"Derived with single argument"<<endl;
    }
    Derived(int x, int y):Base() // Delegating constructor
    //This will call the Base class default constructor
    {
        cout<<"Derived with two arguments"<<endl;
    }

};

int main()
{
    Derived d;
}