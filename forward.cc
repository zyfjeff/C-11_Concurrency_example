#include <iostream>


void CodeActually(int& a) {
    std::cout << a << std::endl;
}

template<typename T>
void IamForwarding(T&& t) {
    CodeActually(t);
}

int main()
{
 int b = 1;
 const int& t = b;
 IamForwarding<int>(t);   
}
