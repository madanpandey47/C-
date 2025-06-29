#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
public:
    // Parameterized Constructor (assignment in body)
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor (assignment in body)
    Student(const Student &other) {
        name = other.name;
        age = other.age;
        cout << "Copy constructor called!" << endl;
    }

    void setName(string name){
        this->name=name;
    }

    void display() {
        cout << name << ", " << age << " years old" << endl;
    }
};

int main() {
    Student s1("Alice", 20);
    cout << "Original: ";
    s1.display();

    Student s2 = s1;
    cout << "Copy: "<<endl;
    s2.display();
    s2.setName("Madan");
    s2.display();
    s1.display();
    return 0;
} 