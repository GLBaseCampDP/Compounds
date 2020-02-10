#include <iostream>

using namespace std;

int main() {
    int i;
    double d;
    int* iPtr = &i; 		// ок
    double* dPtr = &d; 	// ок
    // iPtr = &d; 			// неправильно: треба приводити до вказівника на double
    iPtr = (int*)&d;// ок
    // dPtr = &i; 			// неправильно: треба приводити до вказівника на int
    dPtr = (double*)&i;// ок
    //int* ptr = 7; 			// неправильно
    int* ptr = (int*)7; 			// ок

    return 0;
}
