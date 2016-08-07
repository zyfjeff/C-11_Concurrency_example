#include <iostream>

using namespace std;

struct alignas(32) ColorVector {
    double r;
    double g;
    double b;
    double a;
};

int main() {
    cout << "alignof(ColorVector): " << alignof(ColorVector)  <<" size: " << sizeof(ColorVector)<< endl;
    return 1;
}
