#include <iostream>
#include <tuple>

int main()
{
    auto triple = std::make_tuple(5,6,7);
    std::cout << std::get<1>(triple);
}
