#include <iostream>

using namespace std;

union U {
    unsigned int t:1; // оголошення БП як прапорця
    struct A {
        int t:1;
        int i;
    } a;
    struct B {
        int t:1;
        int i;
    } b;
} u;

bool Is(U u)
{
    return (u.t)? false:true;
}
int main() {
    u.t = 1;
    (Is(u))? u.a.i = 10 : u.b.i = 20;
    cout<<u.b.i;
}
