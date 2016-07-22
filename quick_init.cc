#include <iostream>

class quick_init
{
  public:
    quick_init() {}
    ~quick_init() {}

  private:
    int var1 = 10;
    bool var2 = false;
    char var3 = 'c';
    static const int static_var = 10;
};

int main()
{
    quick_init quick;
    std::cout << quick.static_var << std::endl;
    return 0;
}
