#include <iostream>
#include <string>
using namespace std;

class parent{
    private:
    int x;
    protected:
    int y;
    public:
    int z;
};

class child:protected parent{
    public:
    child(){
        cout << "Int x protec: " << y << endl;
        cout << "int z public: "<<z<<endl;

    }    
    };

int main() {
    child c;
    return 0;
}