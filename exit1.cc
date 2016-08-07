#include <cstdlib>
#include <iostream>

using namespace std;

struct A { ~A() { cout << "Destruct A." << endl; }};
void closeDevice() {cout << "Device is closed" << endl;}

int main() {
    A a;
    at_quick_exit(closeDevice);
    quick_exit(0);
}
