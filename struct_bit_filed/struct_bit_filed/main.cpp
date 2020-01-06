#include <iostream>

using namespace std;

struct A
{
    unsigned m 	:5;
    int 	j	:3;
    char z: 1;
    volatile bool b: 2;
    const int d:3;
    // double p: 4; помилка

};
A a = {.d = 4};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
