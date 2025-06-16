#include <stdio.h>
#include <string.h>
#include <iostream>
#include<string.h>

using namespace std;

typedef struct {
    int RollNo;
    string Name;
    char ClgName[50];
    string Address;
} Student;

int main(){
    Student s1;
    s1.Name=("Madan Pandey");
    // strcpy(s1.Name, "Ron Doe");
    strcpy(s1.ClgName, "Kathmandu University");
    s1.RollNo = 69;
    s1.Address = "Kathmandu, Nepal";
    cout << "Student Name: " << s1.Name << endl;
    cout << "College Name: " << s1.ClgName << endl;
    cout << "Roll No: " << s1.RollNo << endl;
    cout << "Address: " << s1.Address << endl;
    return 0;
}