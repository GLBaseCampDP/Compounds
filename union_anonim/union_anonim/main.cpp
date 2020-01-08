#include <iostream>

static union {// оголошення анонімного об'єднання
    int x = 1000;
};
// int x = 2000; не можна оголошувати з анонімниим union
union A { // оголошення об'єднання в С++
    int x;
    A(int i);
    int get() {return x;}
};
A::A(int i) {x=i+10;}

struct B {	// оголошення структури в С++
    B(int i) { x = i+20; }
    int get(){return x;}
    private:
        int x;
};

struct { // використовується лише один екземляр структури
    int j;	// а тому її ім’я в оголошенні опущено
} s1;

union { // використовується лише один екземляр об'єднання
    int j;	// а тому її ім’я в оголошенні опущено
} u1;

int& get (){return x;}

int main(){
    int x = -1;
    A u(10); B s(10);
    using namespace std;
    cout <<"static anoniumous union "<< get() <<"\n"<<
        "static anoniumous union "<< ::x <<"\n"<<
        "local variable "<< x <<"\n"<<

        "union " << u.get()<< "\n" <<
        "struct " << s.get()<< "\n" <<
        "anoniumous union " << u1.j << "\n" <<
        "anoniumous struct " << s1.j << "\n";
}
