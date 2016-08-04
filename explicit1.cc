#include <iostream>
#include <string>

class ConvertTo {};
class Convertable {
 public:
    operator ConvertTo() const { return ConvertTo(); }
 private:
};

void Func(ConvertTo ct) {

}


int main()
{
    Convertable c;
    ConvertTo ct(c);
    ConvertTo ct2 = c;
    ConvertTo ct3 = static_cast<ConvertTo>(c);
    Func(c);   
}
