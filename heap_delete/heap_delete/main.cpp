#include <iostream>
#include <malloc.h>

using namespace std;
#define ENDL cout << '\n';

struct A {
A() { cout << "ctor\n"; }
~A(){ cout << "dtor\n";}
};

int main() {
    A m[5]; ENDL;
    A* p = new A[5]; ENDL;
    A* p2 = (A*) malloc(5*sizeof(A));
    delete [] p; ENDL;
    free(p2);
    p = new A[5]; ENDL;
    delete p; ENDL;
    int* p3 = new int[5];
    delete p3;
    return 0;
}
