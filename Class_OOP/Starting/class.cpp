#include <string>
#include <iostream>
using namespace std;

class Employee{

    private:

    int EmpID;
    string EmpDesignation;
    string EmpName;
    float Salary;
    
    public:
    // Employee ID

        Employee& setEmpID(int EmpID){
        // Validation can be added here
            this->EmpID = EmpID;
            return *this;
    }
    int getEmpID(){
        return EmpID;
    }

    // Employee Salary
        void setSalary(float salary){
        // Validation can be added here
        Salary = salary;
    }
    int getSalary(){
        return Salary;
    }

    // Employee Designation

        void setDesignation(string designation){
        EmpDesignation = designation;
    }
    string getDesignation(){
        return EmpDesignation;
    }

    // Employee Name

        void setEmpName(string name){
        EmpName = name;
    }
    string getEmpName(){
        return EmpName;
    }

};

// Main-function

int main(){
    string name;
    // string designation;
    int id;
    // float salary;

    Employee e1;
    // cout << "Enter Employee Name: ";
    // cin >> name;
    cout << "Enter Employee Employee ID: ";
    cin >> id;
    // cout << "Enter Employee Designation: ";
    // cin >> designation;
    // cout << "Enter Employee salary: ";
    // cin >> salary;
    //
    // e1.setEmpName(name);
    //
    // e1.setSalary(50000);

    // e1.setDesignation("Berojgar");
    // cout << "Employee Name: " << e1.getEmpName()<< endl;
    // cout << "Salary: " << e1.getSalary() << endl;
    // cout << "Designation: " << e1.getDesignation() << endl;
    cout<<"Employee ID is: "<<e1.setEmpID(id).getEmpID()<<endl;
    return 0;
}