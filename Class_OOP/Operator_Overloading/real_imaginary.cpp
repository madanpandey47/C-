#include <iostream>
#include <string>
using namespace std;

class Complex {

    private:
    int real;
    int imaginary;

    public:
    Complex(int real = 0, int imaginary = 0) {
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex operator+(Complex &c) {
        Complex temp;
        temp.real = this->real + c.real;
        temp.imaginary = this->imaginary + c.imaginary;
        return temp;
        }
    void print() {
        cout << this->real << "+" << this->imaginary << "i" << endl;
        }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);
    // Complex c3 = c1 + c2;
    Complex c3 = c1.operator+(c2);
    c3.print();  // Output: 6+8i
    return 0;
}