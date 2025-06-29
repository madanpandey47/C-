#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    // Static data member (class-level counter)
    static int totalEmployees;  // Declaration

public:
    // Constructor
    Employee(string n, int i) {
    name = n;
    id = i;
    totalEmployees++; // Static data increased by 1.
}

    // Destructor
    ~Employee() {
        totalEmployees--;  // Decrement when object destroyed
    }

    // Static member function to access static data
    static int getTotalEmployees() {
        return totalEmployees;
    }

    void display() {
        cout << "ID: " << id << " | Name: " << name << endl;
    }
};

// Initialize static member (MANDATORY)
int Employee::totalEmployees = 0;

int main() {
    cout << "Initial employee count: " << Employee::getTotalEmployees() << "\n\n";

    // Create employees
    Employee e1("Alice Johnson", 1001);
    Employee e2("Bob Smith", 1002);
    
    cout << "After hiring 2 employees:\n";
    e1.display();
    e2.display();
    cout << "Total employees: "  << Employee::getTotalEmployees() << "\n\n";

    {
        // Nested scope
        Employee e3("Charlie Brown", 1003);
        cout << "--- Inside block ---\n";
        cout << "New hire: " <<endl;
        e3.display();
        cout << "Total employees: " 
             << Employee::getTotalEmployees() << "\n";
        cout << "--- Exiting block ---\n";
    }  // e3 destroyed here

    cout << "\nAfter Charlie leaves:\n";
    cout << "Total employees: " 
         << Employee::getTotalEmployees() << endl;

    return 0;
}  // e1 and e2 destroyed here