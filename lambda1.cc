#include <iostream>

int main() {
    int val;
    auto const_val_lambda = [&](int val) {
        val = 3;
    };
    const_val_lambda(val);
    std::cout << val << std::endl;
}
