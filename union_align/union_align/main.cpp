

#include <iostream>
using namespace std;
union U {
    struct A {
        int i; // поле вкладеної структури
        char c ; // поле вкладеної структури
        int j; // поле вкладеної структури
    } a; // поле об'єданння
    char m[7]; // поле об'єданння
} u; // екземпляр об'єданння
int main(void) {
    u.a.c = 'a';
    cout << "Size of U: " << sizeof (U) << endl<<
    "Size of U::A :" << sizeof(U::A) << endl<<
    "Size of u.m: " << sizeof(u.m) << endl<<
    "Size of u.a.i: " << sizeof(u.a.i) << endl<<
    "Size of u.a.i: " << sizeof(u.a.c) << endl<<
    "Size of u.a: " << sizeof(u.a) << endl;
    cout << "& u " << (&u) << '\n' <<
            "& u.m " << (&u.m) << '\n' <<
            "& u.a " << (&u.a) << '\n' <<
            "& u.a.i " << (&u.a.i) << '\n' <<
            "& u.a.j "<< (&u.a.j) << '\n';

}
