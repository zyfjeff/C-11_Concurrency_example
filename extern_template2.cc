#include "extern_template.h"


extern template int add<int>(int,int);
int test2()
{
    return add(7,8);
}
