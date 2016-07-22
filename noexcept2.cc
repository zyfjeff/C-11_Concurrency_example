#include <iostream>

using namespace std;
void Throw() {throw 1;}
void NoBlockThrow() {Throw();}
void BlockThrow() noexcept { Throw();}


int main()
{
    try {
        Throw();
    }    
    catch(...) {
        std::cout << "Throw is not blocked." << std::endl;
    }

    try {
        NoBlockThrow();
    }
    catch(...) {
        std::cout << "Throw is not blocked." << std::endl;
    }

    try {
        BlockThrow();
    }
    catch(...) {
        std::cout << "Found throw 1." << std::endl; 
    }
}
