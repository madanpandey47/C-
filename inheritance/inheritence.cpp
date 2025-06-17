#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;
    string gender;
    string address;
    string phone;
    string email;

    Person() {
        cout << "Person constructor called" << endl;
    }

    Person(string name, int age, string gender, string address, string phone, string email) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->address = address;
        this->phone = phone;
        this->email = email;
    }
};

class Student : public Person {
public:
    float fees;
    float marks;

    Student(): Student(10) { // Delegating constructor
    // This will call the constructor with int parameter
    // It is a way to provide a default constructor that initializes the object with a specific value.
        cout << "Student constructor called" << endl;
    }

    Student(string name, int age, string gender, string address, string phone, string email, float fees, float marks)
        : Person(name, age, gender, address, phone, email) {
        this->fees = fees;
        this->marks = marks;
    }
    Student(int x) {
        cout << "Student constructor with int called" << endl;
    }
};



class Teacher : public Person {
public:
    float salary;
    string subject;

    Teacher(string name, int age, string gender, string address, string phone, string email, float salary, string subject)
        : Person(name, age, gender, address, phone, email) {
        this->salary = salary;
        this->subject = subject;
    }
};

class Staff : public Person {
public:
    float salary;
};

int main() {
    Student s1("Niraj", 28, "Male", "Kathmandu", "9800000000", "niraj@gmail.com", 10000, 90);

    cout << "Student Details:" << endl;
    cout << "-----------------" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Gender: " << s1.gender << endl;
    cout << "Address: " << s1.address << endl;
    cout << "Phone: " << s1.phone << endl;
    cout << "Email: " << s1.email << endl;
    cout << "Marks: " << s1.marks << endl;
    cout << "Fees: " << s1.fees << endl;

    return 0;
}