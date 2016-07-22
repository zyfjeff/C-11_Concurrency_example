#include <iostream>
#include <type_traits>

using namespace std;

int test()
{
    int a = 1;
    return a;
}

int main()
{
    int a = 5,b = 6;
    int&& rvalue1 = a + b;
    int&& rvalue2 = 5;
    int&& rvalue3 = test();

    cout << is_rvalue_reference<decltype(rvalue1)>::value << endl;
    cout << is_rvalue_reference<decltype(rvalue2)>::value << endl;
    cout << is_rvalue_reference<decltype(rvalue3)>::value << endl;
}
