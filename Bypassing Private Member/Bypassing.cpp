#include <iostream>

class Solo{
private :
int rollno; // 4 byte 
std::string name; // 24 byte

// In CPP just a class definition and object creation of it takes 1 bytes of memory space 
// Just to assign unique memory address to each object

public :
Solo(std::string name , int id){
   this->rollno = id;
   this->name = name;
}

void getInfo(){
    std::cout << "Student name : " << name << std::endl;
    std::cout << "Student rollno. : " << rollno << std::endl;
}
};


int main(){

    Solo s("Madan" , 5);

    std::cout << sizeof(s) << std::endl; // 28
    s.getInfo();

    /*
    /
    output:

    Student name Madan Pandey
    Student rollno 5
    */

    // bypassing private member for making accessible 

    int * ptr = (int *)&s;
    *ptr = 20;

    std::string* namePtr = (std::string*)(ptr + 1);
    *namePtr = "Unknown";

    s.getInfo();

    /*
     output:

     Student name Unknown
     Student rollno 20
    
    */

    /*
    Reason why happens ?

    Because the restriction is made by compiler for code but for memory 

    Memory is modifable so we just get the address of properties and modified it 
    */
}