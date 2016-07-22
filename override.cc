#include <iostream>


class base 
{
 public:
    virtual void test() {
        std::cout << "OK" << std::endl;
    }
};

class derived : public base
{
    public:
        void test() override {
            std::cout << "test" << std::endl;
        }    
};

int main()
{
    
}
