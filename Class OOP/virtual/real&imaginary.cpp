//
// Created by Madan Pandey on 6/16/2025.
//
#include <iostream>
#include <string.h>
using namespace std;

class complexNo {
private:
    int real;
    int imaginary;

public:
    complexNo(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};
int main() {
    // Scope Resolution opr ::
    cout<<"Hello World"<<endl;
    complexNo c(1,2);
    c.print();
    return 0;
}