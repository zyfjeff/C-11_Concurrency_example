#include <iostream>

using namespace std;

class HasPtrMem {
  public:
    HasPtrMem() : d(new int(0)) {
        std::cout << "Construct: " << ++n_cstr << std::endl;
    }

    HasPtrMem(const HasPtrMem& h) : d(new int(*h.d)) {
        std::cout << "Copy construct: " << ++n_cptr << std::endl;
    }

    ~HasPtrMem() {
        std::cout << "Destruct: " << ++n_dstr << std::endl;
    }
    
    int *d;
    static int n_cstr;
    static int n_dstr;
    static int n_cptr;
};

int HasPtrMem::n_cstr = 0;
int HasPtrMem::n_dstr = 0;
int HasPtrMem::n_cptr = 0;

HasPtrMem GetTemp() { return HasPtrMem(); }

int main() {
    HasPtrMem a = GetTemp();
}
