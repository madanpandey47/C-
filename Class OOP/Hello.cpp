#include <iostream>
#include <string>

using namespace std;

class base {
protected:
    int provar;     // Not initialized
public:
    int pubvar;     // Not initialized
};

class deri: protected base {
protected:
    int provar;
public:
    int pubvar;

    deri() {
        cout << "hELLO" << endl;
    }

    void show() {
        cout << "deri::provar = " << provar << ", deri::pubvar = " << pubvar << endl;
        cout << "base::provar = " << base::provar << ", base::pubvar = " << base::pubvar << endl;
    }
};

int main() {
    deri d1;
    d1.show();  // Access is allowed because it's within the class
    return 0;
}
