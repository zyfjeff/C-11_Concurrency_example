#include <thread>
#include <iostream>

void foo()
{

}

void bar()
{

}

int main() {
    std::thread first(foo);
    std::thread second(bar,0);
    std::cout << "main, foo and bar now execute concurrently...\n";
    first.join();
    second.join();
    std::cout << "foo and bar completes\n";
    return 0;
}
