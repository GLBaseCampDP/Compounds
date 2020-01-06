#include <iostream>

using namespace std;

struct S {}; 	// порожня структура
//#pragma pack(push, 1) // вирівнювання по 1 байту
struct S1 {
    char a[2];	char c, *s;
    S *p;   	short i;
} z = { "a", 'b', "qwerty", new S };
//#pragma pack(pop)		// кінець
struct S2
{
    char a[2];
    char c, added_1, *s;
    S *p;
    char added_2, added_3;
    short i;
} z2;

int main(void)
{
   cout << "Size of int :" << sizeof(int) << endl <<
     "Size of int* :" << sizeof(int*) << endl <<
     "Size of short :" << sizeof(short) << endl <<
     "Size of char :" << sizeof(char) << endl <<
     "Size of S1 :" << sizeof(S1) << endl <<
     "Size of S :" << sizeof(S) << endl <<
     "Size of S2 :" << sizeof(S2) << endl <<
        "adr z.a :" << long(&z.a) << endl <<
        "adr z.c :" << long(&z.c) << endl<<
        "adr z.s :" << long(&z.s) << endl<<
        "adr z.p :" << long(&z.p) << endl<<
        "adr z.i :" << long(&z.i) << endl;
}
