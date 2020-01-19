#include <iostream>
#include <cstring>
using namespace std;
struct A {  unsigned char n; };
struct B {
 unsigned char n;
 B(){ cout << "ctor B\n";}
};
int main(void) {

    char p[6]; // allocate static memory to place the object A and B

    memset(p, 60, sizeof(p)); // Fill the memory cell
    p[5] = '\0';
    cout << "- string (memset) = " << p ;
    // Create an object in memory is clearly filled with number 60
    A* a = new (p) A;
    cout << "\n new A: A.n = " << a->n << "(new A) = " << (long)p << endl;

    // Fill the memory cell
    memset(p, 109 , sizeof(p));
    p[5] = '\0';
    cout << "- string (memset) = " << p ;
    // Create an object in memory is clearly filled with number 109
    A* a1 = new (p) A();
    cout << "\n new A(): A.n = " << a1->n << "\n (new A()) = " << p << endl;

    memset(p, 60, sizeof(p)); // Fill the memory cell
    p[5] = '\0';
    cout << "- string (memset) = " << p ;
    // Create an object in memory is clearly filled with number 60
    B* b = new (p) B;
    cout << "\n new B: B.n = " << b->n << "\n (new B) = " << p << endl;

    // Fill the memory cell
    memset(p, 109 , sizeof(p));
    p[5] = '\0';
    cout << "- string (memset) = " << p ;
    // Create an object in memory is clearly filled with number 109
    B* b1 = new (p) B();
    cout << "\n new B(): B.n = " << b1->n << "\n (newB()) = " << p << endl;
}
