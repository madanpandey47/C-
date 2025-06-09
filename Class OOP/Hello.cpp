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
};

class deri: protected base {
protected:
    int provar;
public:
    int pubvar= 45;

    deri() : base(){
        cout << "HELLO" << endl;
    }

    void show() {
        cout << "deri::provar = " << provar << ", deri::pubvar = " << pubvar << endl;
        cout << "base::provar = " << base::provar << ", base::pubvar = " << base::pubvar << endl;
    }
};

int main() {
    deri d1;
    cout<<d1.pubvar<<endl;
    d1.show();
    return 0;
}

