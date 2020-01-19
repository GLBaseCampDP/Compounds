# include <iostream>

void* operator new(size_t t) {
    std::cout <<"AAAAA";
  //  return NULL;  warning повертати NULL
    return (void*)1;
}

void operator delete(void* p) {
    std::cout <<"BBBBB";
}

int main() {
    int *k;
    k = new int;
    delete k;
    delete (long*)1;
    // delete NULL; error
    delete (long*)NULL; //Ок
}
