#include <iostream>
struct S1 {
   int i;
   struct S2	{  int i;  };		// вкладена структура
   };
S1 s1 = {1}; 					// створення екземпляра структури
S1::S2 s2 = {2};					// створення екземпляра вкладеної структури
int main() {
  std::cout << s1.S1::i<<'n'; 		// доступ за допомогою ОДД
  //std::cout << s1.S2::i<<'n'; 		// доступ до неіснуючого поля
  //std::cout<<s1.S1::S2::i<<'n';	// доступ до неіснуючого поля
}