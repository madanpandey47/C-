#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    float* gpaptr; // Pointer to dynamically allocated memory for GPA

    // Shallow copy copies all member values from one object to another.
    // While Deep copy copies the member values but also makes copies of any dynamically allocated memory that the members point to.

    public:
    Student(string name, float gpa) {
        this->name = name;
        gpaptr = new float; // Allocate memory for GPA for this object
        // This is a shallow copy constructor
        // For deep copy, we would need to allocate new memory for the GPA pointer
        *gpaptr = gpa;
    }

    // DEEP COPY EXAMPLE :

    Student (Student &obj) {
        name = obj.name; // Copy the name
        gpaptr = new float; // Allocate new memory for GPA pointer
        // This is a deep copy constructor
        // For shallow copy, we would just copy the pointer
        *(gpaptr)= *obj.gpaptr;
    }

    void getinfo(int a) {
        cout << " \nStudent "<< a << " Information: "<< endl;
        cout << "Name: " << name << endl;
        cout << "GPA: " << *gpaptr << endl;
    }

    void setgpaptr(float gpa) {
        *gpaptr = gpa;
    }
};


int main(){ 
   
    Student s1("John Doe", 3.8);
    s1.getinfo(1);
    // Shallow copy
    // Student s2(s1); // This creates a shallow copy of s1 into s2
    Student s2 = s1; // This creates a shallow copy of s1 into s2
    s2.setgpaptr(4.0); // This only changes s2’s GPA
    s2.getinfo(2);
    s1.getinfo(1); // s1 remains unchanged — deep copy success

    return 0;
}