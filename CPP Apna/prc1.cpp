#include <string>
#include <iostream>
using namespace std;

class teacher{

    // Access Specifiers
    // Public, Private, Protected
    // Public members can be accessed from outside the class, while private members cannot.
    // Protected members can only be accessed by derived classes.
    // Example of Protected : 
    // class Base {
    // protected:       
    //     int protectedVar;
    // };

    private:
    // Attributes or Properties
    string name;
    int age;
    string email;


    // Encapsulation is nothing but wrapping the data (attributes) and methods (behaviors) together in a single unit (class).
    // It restricts direct access to some of the object's components, which can prevent the accidental modification of data.


    public:
    // Methods or Behaviors
    // Use of methods to set and get the properties
    int getAge(){
        return age;
    }
    void setAge(int a){
        if(a > 0 && a < 100){
            age = a;
        } else {
            cout << "Invalid age" << endl;
        }
    }

};

int main(){
    teacher t1;
    t1.setAge(25);
    cout << "Teacher's age: " << t1.getAge() << endl;

    return 0;
}  