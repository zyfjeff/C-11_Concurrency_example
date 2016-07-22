#include "extern_template.h"


template int add<int>(int,int);

int test()
{
   return add(8,9); 
}
