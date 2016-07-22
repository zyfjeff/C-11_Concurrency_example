struct A {A(int) {}};
struct B {B(int) {}};

//conflict
struct C: A,B {
    using A::A;
    using B::B;
    C(int) {}
};
