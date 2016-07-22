#include <iostream>

class base {
public:
    virtual void test() final {
        std::cout << "only test" << std::endl;
    }

};

class derived : public base {
public:
    void test() {

        std::cout << "function overloading" << std::endl;
    
    }
};

int main()
{

}
