#include <iostream>
#include <string>
using namespace std;
/*
 * inline
 * friend function
 *
 */

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

    friend  void setRollno(Student& s,int newRollNo);
};

void  setRollno(Student& s,int newRollNo)
{
    s.rollNo= newRollNo;
}

int main() {

    Student st2(1,"Niraj");
    cout<<st2.getRollNo()<<endl;

    setRollno(st2,11);

    cout<<st2.getRollNo()<<endl;
    cout<<"Size of "<<sizeof(st2)<<endl;

    return 0;

}