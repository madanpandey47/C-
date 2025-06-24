#include <iostream>
#include <string>
using namespace std;

class manxe {
    private:
    string name;
    int id;

    protected:
    int y;

    public:

    int no;
    manxe(){
        cout<<"Constructor 1 called"<<endl;
    }

    manxe(int id) {
        this->id=id;
        cout<<"Constructor 2 called"<<endl;
    }

    manxe(int id, string name){
        this->id= id;
        this->name=name;
        cout<<"Constructor 3 called"<<endl;
    }

    void hello(){
        cout<<"This is manxe from base class"<<endl;
    }

    void setName(string name="Mausam"){
        this->name = name;
    }

    void getName(){
        cout<<name<<endl;
    }
};



class student: public manxe{
    public:
    int a;
     void hello(){
        cout<<"This is manxe from student class"<<endl;
    }
};



class phoenix:public student{
    
    void setName(int a=0){
        y = a;
    }
     void hello(){
        cout<<"This is manxe from phoenix class"<<endl;
    }

    void getName(){
        cout<<y<<endl;
    }
};

int main() {
    manxe m1;

    m1.no =10;
    cout<<m1.no<<endl;
    m1.hello();
    student s1;
    s1.manxe::hello();
    return 0;
}
