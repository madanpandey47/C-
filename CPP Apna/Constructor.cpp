#include <string>
#include <iostream>
using namespace std;

class Teacher{

    private:
    // Attributes or Properties
    string name;
    int age;
    string email;
    string dept;


    // Encapsulation is nothing but wrapping the data (attributes) and methods (behaviors) together in a single unit (class).


    public:

    //  Constructor:
    //  A constructor is a special member function of a class that is executed whenever an object of the class is created.
    //  Constructor has same name as class and no return type
    // Used for initializing the object of the class.
    //  & only called once when an object is created & memory allocation happens when constructor is called.

    // Constructior can be of three types:
    // 1. Non-parameterized constructor
    // 2. Parameterized constructor
    // 3. Copy constructor

    // Constructor Overloading:
    // A class can have multiple constructors with different parameters. This is called constructor overloading.
    // It allows you to create objects in different ways, depending on the parameters you provide.


    // Non-parameterized constructor:
    // A constructor that does not take any parameters is called a non-parameterized constructor.
    // Teacher() {
    //     // Default constructor
    //     dept = "Computer Science";
    //     cout<< " Teacher object created with default values." << endl;
    // }

    // Parameterized constructor:
    // A constructor that takes parameters is called a parameterized constructor.
    Teacher(string n, int a, string e, string d) {
        name = n;
        age = a;
        email = e;
        dept = d;
        cout << "Teacher object created with parameterized constructor." << endl;
    }

    //Copy constructor:
    // A copy constructor is a special constructor in C++ that initializes an object using another object of the same class.
    Teacher(Teacher &t) {
        cout << "Teacher object created with copy constructor." << endl;
        this->name = t.name;
        this->age = t.age;
        this->email = t.email;
        this->dept = t.dept;
    }

    string getdept(){
        return dept;
    }
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
    void getinfo() {
        cout<< "Teacher's Information:" << endl;
        cout << "Teacher's Name: " << name << endl;
        cout << "Teacher's Age: " << age << endl;
        cout << "Teacher's Email: " << email << endl;
        cout << "Teacher's Department: " << dept << endl;
    }

};

int main(){ 
    Teacher t1("Madan", 30, "madan@example.com", "Mathematics"); // Constructor is called here when the object t1 is created
    // t1.getinfo();
    Teacher t2(t1);
    t2.getinfo();
    // cout << "Teacher's Department: " << t1.getdept() << endl;

    return 0;
}  