#include <iostream>
#include <tuple>

int main()
{
    int x,y,z;
    auto triple = std::make_tuple(5,6,7);
    std::cout << std::get<1>(triple);
    std::tie(x,y,z) = triple;
    std::cout << x << y << z;
}
