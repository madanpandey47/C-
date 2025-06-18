#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int a = 5;
    int b = square(a);
    cout << "Square of " << a << " is " << b << endl;
    return 0;
}
