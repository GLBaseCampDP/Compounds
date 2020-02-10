#include <type_traits>
#include <iostream>
using namespace std;
class A {};
int main(void) {
cout << boolalpha <<
is_reference<A>::value << '\n' <<
is_reference<A&>::value << '\n' <<
is_reference<A&&>::value << '\n' <<
is_reference<int>::value << '\n' <<
is_reference<int&>::value << '\n' <<
is_reference<int&&>::value << '\n' <<
is_lvalue_reference<A>::value << '\n' <<
is_lvalue_reference<A&>::value << '\n' <<
is_lvalue_reference<A&&>::value << '\n' <<
is_lvalue_reference<int>::value << '\n' <<
is_lvalue_reference<int&>::value << '\n' <<
is_lvalue_reference<int&&>::value << '\n' <<
is_rvalue_reference<A>::value << '\n' <<
is_rvalue_reference<A&>::value << '\n' <<
is_rvalue_reference<A&&>::value << '\n' <<
is_rvalue_reference<int>::value << '\n' <<
is_rvalue_reference<int&>::value << '\n' <<
is_rvalue_reference<int&&>::value << '\n';
}
