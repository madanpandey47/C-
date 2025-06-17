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
    bool compareObject(Student s)
    {
        if(this->rollNo==s.rollNo)
        {
            return  true;
        }
        return false;
    }

    bool operator==(Student s)
    {
        if(this->rollNo==s.rollNo)
        {
            return  true;
        }
        return false;
    }

    int sumRollNo(Student st)
    {
        return this->rollNo+st.rollNo;
    }

    int operator+(Student st)
    {
        return this->rollNo+st.rollNo;
    }

};

int main() {

    Student niraj(1,"niraj");
    Student harilal(1,"harilal");

//   cout<< niraj.compareObject(harilal);

//   cout<< niraj.operator==(harilal);

   int sumOfRollNo = niraj.sumRollNo(harilal);
   cout<<sumOfRollNo;

    int sumOfRollNoFromOperator = niraj.operator+(harilal);
    cout<<sumOfRollNoFromOperator;

    int t = niraj+harilal;

    cout<<t;
    //





//    cout<< niraj==harilal;

//if(niraj.operator==(harilal))
//{
//
//}

//   if(niraj==harilal)
//   {
//     cout<<"operator overload";
//   }


    return 0;

}