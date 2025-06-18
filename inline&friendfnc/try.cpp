#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  // virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound(){
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;        // Base class pointer
    Dog d;
    a = &d;
    a->sound();       // Calls Dog's sound() because it's virtual

    return 0;
}

