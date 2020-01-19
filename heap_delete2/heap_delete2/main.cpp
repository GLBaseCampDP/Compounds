#include <iostream>

using namespace std;
#define ENDL std::cout << "\n\n";

struct A {
    A() { std::cout << "ctor\n"; }
    ~A(){ std::cout << "dtor\n";}
};

int main() {
    A* p = new A;
    delete p; delete p;
    ENDL;
    p = new A[3];
    delete p; delete p;

    delete (A*)(p + 3);
    delete (A*)(p + 1);
    delete p;delete p;

    return 0;
}
