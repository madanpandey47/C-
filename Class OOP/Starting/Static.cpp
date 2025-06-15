#include <iostream>
#include <string.h>
using namespace std;

class Student {
    public:
    int rollNo;
    string Name;
    static string CollegeName;

    void set_CollegeName(string CollegeName) {
        this->CollegeName = CollegeName;
    }
    string get_CollegeName() {
        return CollegeName;
    }

    void set_Name(string Name) {
        this->Name = Name;
    }
};

string Student::CollegeName = "Radiant";

int main() {
    string name;
    Student madan;
    Student ashish;
    Student laxman;
    cout<<"The college name was "<<madan.CollegeName<<" College."<<endl;

    madan.set_CollegeName("Nepalaya");
    madan.set_Name("Madan Pandey");
    cout<<madan.Name<<endl;
    madan.set_CollegeName("Nepathya");

    cout<<"The college name is changed to "<<madan.get_CollegeName()<<" College."<<endl;


    return 0;
}