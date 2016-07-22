#include <iostream>
#include <thread>

using namespace std;

class base {
 public:
    base() : i(new int(4)){}
    base(base&& m) : i(m.i) {
        m.i = nullptr;
    }
    int *i;
};


void test(base&& a) {
    while(1) {
        std::cout << *a.i << std::endl;
    }   
}

int main()
{
    
    base b; //left value
    thread q(test,std::move(b));
    q.detach();  
    std::cout << *b.i << std::endl;
    return 0;
}
