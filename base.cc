#include <iostream>
using namespace std;

struct base {
    void f(double i) { cout << "base: " << i << endl;}
};

struct derived : base {
    using base::f;
    void f(int i) { cout << "derived:" << i << endl;}
};

int main()
{
    base b;
    b.f(4.5);

    derived d;
    d.f(4.5);
}
