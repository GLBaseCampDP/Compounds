    #include <iostream>

    using namespace std;

    union U { int i ; double d = 1; };


    void f (union U) {}


    int m =100;

    int main()
    {
        int z = 120 + ({m;});

        U u;
        int x = *((int*)&u);
        double y = *((double*)&u);
        cout << x<< y;
    //    u = (U)x;
    //    u = (U)y;
    //    f ((U)x);

    //    cout << "Hello World!" << endl;
        return 0;
    }
