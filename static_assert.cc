
#include <boost/static_assert.hpp>

template <bool x> struct STATIC_ASSERTION_FAILURE;
template <> struct STATIC_ASSERTION_FAILURE<true> { enum { value = 1 }; };
template<int x> struct static_assert_test{};

//    typedef static_assert_test<sizeof(STATIC_ASSERTION_FAILURE<(e) ? true:false>) > onlytest;

#define static_assert1(e)                              \
   sizeof(STATIC_ASSERTION_FAILURE<(e) ? true:false>);



#define static_assert2(e)                              \
        do {                                           \
            enum { assert_static__ = 1 / (e) };        \
        }while(0)                                      \


#define static_assert3(e)                              \
    char ___dump_array[(e)? 0 : -1];


int main()
{
    int a,b;
    /*
    BOOST_STATIC_ASSERT(sizeof(a) != sizeof(b));
    static_assert1(sizeof(a) != sizeof(b));
    static_assert2(sizeof(a) != sizeof(b));
    static_assert3(sizeof(a) != sizeof(b));
    */
    //C++11
    static_assert(sizeof(a) != sizeof(b),"a and b have same size");
}
