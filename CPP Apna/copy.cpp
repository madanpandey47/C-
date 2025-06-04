#include <iostream>
#include <string>

using namespace std;


class Student{
    private:
    string name;
    float* gpaptr; // Pointer to dynamically allocated memory for GPA

    // Shallow copy copies all member values from one object to another.
    // While Deep copy copies the member values but also makes copies of any dynamically allocated memory that the members point to.
    // 



    public:
    Student(string name, float gpa) {
        this->name = name;
        gpaptr = new float; // Allocate memory for GPA for this object
        // This is a shallow copy constructor
        // For deep copy, we would need to allocate new memory for the GPA pointer
        *gpaptr = gpa;
    }

    Student (Student &obj) {
        name = obj.name; // Copy the name
        gpaptr = new float; // Allocate new memory for GPA pointer
        // This is a deep copy constructor
        // For shallow copy, we would just copy the pointer
    }

    void getinfo() {
        cout << " \nStudent's Information:" << endl;
        cout << "Student's Name: " << name << endl;
        cout << "Student's GPA: " << *gpaptr << endl;
    }

};


int main(){ 
   
    Student s1("John Doe", 3.8);
    s1.getinfo();
    // Shallow copy
    // Student s2(s1); // This creates a shallow copy of s1 into s2
    Student s2 = s1; // This creates a shallow copy of s1 into s2
    // *(s2.gpaptr) = 4.0; // This will change the GPA of s1 as well, because s2.gpaptr points to the same memory location as s1.gpaptr 
    s2.getinfo();

    return 0;
}