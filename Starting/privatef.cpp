
#include <iostream>
#include <string>

using namespace std;

class mine{
   private :
   int mineme = 20; 


   public :
   int getme()
{
    return mineme;
}
};

int main() {
    mine h;
    int * ptr = (int *) &h;
    std::cout << "Value of get " << h.getme() << std::endl;
    std::cout << "Before " << *ptr<<endl;

 *ptr = 10000;
    std::cout << *ptr<<endl;
    std::cout << "Value of get " << h.getme() << std::endl;
    return 0;
}