#include <iostream>

using namespace std;

template <long... nums> struct Multiply;

template <long first,long... last>
struct Multiply<first,last...> {
    //递归解包
    static const long val = first * Multiply<last...>::val;
};

//结束条件
template<>
struct Multiply<> {
    static const long val = 1;
};

int main()
{
    cout << Multiply<2,3,4,5>::val << endl;
    cout << Multiply<22,44,66,88,9>::val << endl;
    return 0;
}
