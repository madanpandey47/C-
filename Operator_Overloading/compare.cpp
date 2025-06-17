#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string Name;

public:
    Student(int id = 0, string Name = "Anonymous") {
        this->id = id;
        this->Name = Name;
    }

    bool operator==(Student &c) {
        if (this->id == c.id){
            return true;
        }
        else{
            return false;
        }
    }

    void print() {
        cout << this->id << "+" << this->Name << "i" << endl;
    }
};

int main() {
    Student c1(1, "Niraj");
    Student c2(1, "Madan");
    int a = c1.operator==(c2);
    cout<< "The output is : "<< a<<endl;
    return 0;
}
