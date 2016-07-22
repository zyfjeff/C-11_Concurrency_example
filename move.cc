#include <iostream>

using namespace std;

class HugeMem {

 public:
    HugeMem(int size) : sz(size > 0 ? size  : 1) {
        c = new int[sz];
    }

    ~HugeMem() {delete[] c;}
    HugeMem(HugeMem&& other): sz(other.sz),c(other.c) {
        std::cout <<"move "  << __func__ << std::endl;
        other.c = nullptr;
    }

    int *c;
    int sz;
};

class Moveable {
 public:
    Moveable() : i(new int(3)),h(1024) {}
    ~Moveable() {delete i;}
    Moveable(Moveable&& m) :i(m.i),h(move(m.h)) {   //three
        m.i = nullptr;
    }
    int *i;
    HugeMem h;
};

Moveable GetTemp() {
    Moveable tmp = Moveable();  //one
    cout << hex << "Huge Mem From" << __func__
         << " @" << tmp.h.c << endl;
    return tmp;
}

int main() {
    Moveable a(GetTemp());  //two
    cout << hex << "Huge Mem From" << __func__
         << " @" << a.h.c << endl;
    return 0;
}
