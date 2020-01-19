#include <iostream>
using namespace std;
int main(void) {
    int i = 1;
    int const * const p1 = &i;
    int& p2 = i;
    cout << "Variable address: 0x" << hex << &i << '\n';
    cout << "Reference address: 0x" << hex << &p2 << '\n';
    cout << "Pointer address: 0x" << hex << &p1 << '\n';
    cout << "Pointed address: 0x" << hex << &*p1 << '\n';
}
