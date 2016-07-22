#include <iostream>

/*
//first case
class Foo {
    void bar() {};
};


template<typename T>
class QueueItem {
    friend class foobar;
    friend void foo();
    friend void Foo::bar();
};

*/


//second case
template<typename Type>
class foobar{
public:
    foobar() {};
};

template<typename Type>
void foo(QueueItem<Type>)
{
    
}

template<typename Type>
class Queue {
    void bar() {}
};

template <class Type>
class QueueItem {
    friend class foobar<Type>;
    friend void foo<Type>(QueueItem<Type>);
    friend void Queue<Type>::bar();
};

