#include <iostream>
int i = 1;
enum class B : int {};
B b1{1};
// B b2 = {1};недопускається
B b2 = B{1};

void f (B){}


int main() {
    // f({2});  недопускається

}
