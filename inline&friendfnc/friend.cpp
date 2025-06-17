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
    Student st(1,"niraj");
    cout<<st.getRollNo()<<endl;

    setRollno(st,11);

    cout<<st.getRollNo()<<endl;

    return 0;

}