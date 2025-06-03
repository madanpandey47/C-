#include <string>
#include <iostream>
using namespace std;

// Constructor
/**
 *Doesn't have any return type
 *Name same as class name
 *called during object initialization
 **/

class Employee {
public:
    int EmpID;
    string Name;

    // Default constructor
    Employee() {
        EmpID = 0;
        Name = "Unnamed";
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Employee(int ID, string name) {
        EmpID = ID;
        Name = name;
    }

    // Member function to print details
    void getDetails() {
        cout << "EmpID: " << EmpID << endl;
        cout << "Name: " << Name << endl;
    }
};

// Main-function
int main() {
    // Use parameterized constructor to initialize obj1
    Employee obj1(1, "Madan");
    obj1.getDetails();

    return 0;
}
