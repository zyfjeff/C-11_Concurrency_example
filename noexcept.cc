#include <iostream>
#include <unistd.h>
class resource_RAII
{
 public:
    resource_RAII() { std::cout << "resource_RAII construct" << std::endl; }
    ~resource_RAII() { std::cout << "resource_RAII deconstruct" << std::endl; }
};

//void except_func() throw()    //C++98
void except_func() noexcept     //C++11
{
    resource_RAII raii = resource_RAII();
    int except = 10;
    throw except;
    return;
}

int main()
{
    except_func();
    sleep(10);
    return 0;
}
