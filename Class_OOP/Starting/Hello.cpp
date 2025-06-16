#include <iostream>
#include <string>
using namespace std;

class base {
protected:
    int provar;

public:
    int pubvar;
    base(){
        pubvar=9;
        cout<<pubvar<<endl;
    }

    void collision(){
        cout<<"Collision of base 1 is called here."<<endl;
    }
};

class base2 {
    public:
    void collision(){
        cout<<"Collision of base 2 is called here."<<endl;
    }

    // Method collision in base 1 and base 2
};

class derived: public base,public base2 {
protected:
    int provar;
public:

    void collision(){
        cout<<"Collision of derived is called here."<<endl;
    }

    int pubvar= 45;
    derived(){
        cout << "HELLO" << endl;
    }

    // void show() {
    //     cout << "derived::provar = " << provar << ", derived::pubvar = " << pubvar << endl;
    //     cout << "base::provar = " << base::provar << ", base::pubvar = " << base::pubvar << endl;
    // }
};

int main() {
    derived d1;
    cout<<d1.pubvar<<endl;
    // d1.show();
    d1.collision();
    d1.base2::collision();

    return 0;
}
