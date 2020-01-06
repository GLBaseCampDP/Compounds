#include <iostream>

#pragma pack(push, 1)
struct S1 {
 int a:4; char s; int i; int z :4; } z1;
#pragma pack(pop)


struct S2 {
 int a:4; char s; int i; int z :4; } z2;


int main()
{
    std::cout << " sizeof int " << sizeof(int) << std::endl <<
    " sizeof S1 " << sizeof(S1)<< std::endl <<
    " sizeof S2 " << sizeof(S2)<< std::endl;
    return 0;
}
