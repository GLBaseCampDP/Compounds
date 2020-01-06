#include <iostream>

using namespace std;

struct A {
  int i;
  char c;
  int j;
};

int main(void)
{
cout << "Size of int :" << sizeof(int) << endl <<
        "Size of char :" << sizeof(char) << endl <<
"Size of A :" << sizeof(A) << endl;

}
