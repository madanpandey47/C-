
#include <iostream>
#include <string>

using namespace std;

class fuck{
   private :
   int fuckme = 20; 


   public :
   int getme()
{
    return fuckme;
}
};

int main() {
    fuck h;
    int * ptr = (int *) &h;
    std::cout << "Value of get " << h.getme() << std::endl;
    std::cout << "Before " << *ptr<<endl;

 *ptr = 10000;
    std::cout << *ptr<<endl;
    std::cout << "Value of get " << h.getme() << std::endl;
    return 0;
}