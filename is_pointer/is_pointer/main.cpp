#include <type_traits>
#include <iostream>
using namespace std;
struct A {};
int main(){
    cout << boolalpha  <<
            is_pointer<A>::value << '\n' <<
            is_pointer<A*>::value << '\n' <<
            is_pointer<float>::value << '\n' <<
            is_pointer<int>::value << '\n' <<
            is_pointer<int*>::value << '\n' <<
            is_pointer<int**>::value << '\n';
}
