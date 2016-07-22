#include <iostream>

struct A {
    A(int a = 3,double b = 2.4) {
        m_a = a;
        m_b = b;
    }  
    int m_a;
    int m_b;
};

struct B : A {
    using A::A;
};

int main()
{
    B b(5);
    std::cout << b.m_a << std::endl;
    std::cout << b.m_b << std::endl;
}
