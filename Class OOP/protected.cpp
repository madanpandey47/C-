#include <iostream>
#include <string>

using namespace std;

class Teacher {
    protected:
        int age;
        
    public:
    void setAge(int a) {
            this->age = a;
    }
};

int main() {
    Teacher t1;
    t1.setAge(30);

    return 0;
}