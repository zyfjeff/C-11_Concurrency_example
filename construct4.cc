struct A {A (int) {} };
struct B : A{using A::A; };

int main()
{
    B b;
}
