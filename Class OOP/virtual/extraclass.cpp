#include <iostream>
#include <string>

using namespace std;

class Base1{
    public:
    virtual void collision(){

    }
};

class Base2{
    public:
    virtual void collision(){

    }
};

class Implementation: public Base1, public Base2{

};



int main() {
    Implementation I;
    
    return 0;
}