#include <iostream>

template <bool block>
void func() noexcept(block) {
    throw 1;
}

int main()
{
   try {
    
        func<false>();  //
   }
   catch(...) {
        std::cout << "un blokc throw" << std::endl; 
   }
}
