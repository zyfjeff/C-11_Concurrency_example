#include <iostream>

using namespace std;

void RunCode(int&& m) {cout << "rvalue ref" << endl;}
void RunCode(int& m) {cout << "lvalue ref" << endl;}
void RunCode(const int&& m) {cout << "const rvalue ref" << endl;}
void RunCode(const int& m) {cout << "const lvalue ref" << endl;}


template <typename T>
void PerfectForward(T&& t) {
    RunCode(forward<T>(t));
}

int main()
{
    int a,b;
    const int c = 1;
    const int d = 0;
    PerfectForward(a);
    PerfectForward(move(b));
    PerfectForward(c);
    PerfectForward(move(d));

}
