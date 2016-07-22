#include <iostream>

using namespace std;

struct people {
 public:
    int hand;
    static people *all;
};

int main() {
    people p;
    std::cout << sizeof(p.hand) << std::endl;
    std::cout << sizeof(people::all) << std::endl;
    std::cout << sizeof(people::hand) << std::endl;
}
