#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
public:
    // Constructor
    Student(string n, int a) : name(n), age(a) {
        cout << name << " created!" << endl;
    }

    // Destructor (simplified)
    ~Student() {
        cout << name << " destroyed!" << endl;
    }

    void display() {
        cout << name << ", " << age << " years old" << endl;
    }
};

int main() {
    cout << "Main starts" << endl;
    
    // { // Start of nested scope
    //     cout << "\nEntering nested scope..." << endl;
    //     Student alice("Alice", 20);
    //     alice.display();
    //     cout << "Leaving nested scope..." << endl;
    // } // alice destroyed here
    
    // cout << "\nBack in main" << endl;
    
    Student* bob = new Student("Bob", 21);
    bob->display();
    delete bob; // Explicit destruction
    
    cout << "\nMain ends" << endl;
    return 0;
}