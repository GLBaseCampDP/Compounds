#include <iostream>

using namespace std;
typedef unsigned int uint;
const uint row = 2;
const uint col = 3;
int& at( int* m, unsigned int i, unsigned int j ) {
    return m[ i*col + j ];
}
int main() {
    int* m = new int[col * row];
    for (uint i = 0; i < row; i++)
        for (uint j = 0; j < col; j++)
            at(m, i, j) = i * col + j;   //ініціалізація елементів
     return 0;
}
