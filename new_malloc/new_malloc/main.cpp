#include <memory>
#include <iostream>
int *i, *j;
int main() {
    i = new int[0];//буде повернено ненульовий вказівник
    j = (int*) malloc(1); //буде повернено нульовий вказівник
    std::cout << (long)i << ' '<< (long)j;
    delete i;
    std::cout << (long)i;

}
