#include <iostream>
#include <string>
using namespace std;


class Student
{
private:
    int rollNo;
    string name;
public:
    Student(int rollNo,string name){
        this->rollNo = rollNo;
        this->name = name;
    }

    int getRollNo()
    {
        return  rollNo;
    }
    
    friend bool operator==(Student& st1 , Student& st2);
};

bool operator==(Student& st1 , Student& st2)
{
    return st1.rollNo == st2.rollNo;
}

int main() {
    Student st1(19,"niraj");
    Student st2(29,"niraj");

    // cout<<st1.getRollNo()<<endl;

    // bool a = operator==(st1,st2);

    cout<<"The output is " << (st1 == st2)<<endl;
    return 0;

}