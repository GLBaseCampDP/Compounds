#include <iostream>

using namespace std;
// Попереднє оголошення структури
struct S2;
// Визначення структури і вкладеної структури
struct S1 {
    char a[2];
    struct S3 {} *ps; // вкладена структура
} z;
// Повне визначення попередньо ооголошеної структури
struct S2 {
    char a[2];
    //  S2 s;		Помилка
    S2* s; // на саму структуру може посилатись тільки вказівник
};


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
