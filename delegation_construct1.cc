#include <new>
class Info {
 public:
    Info() {InitRest();}
    Info(int i) { this->Info();type = i;}
    Info(char e) { this->Info();name = e;}
 private:
    void InitRest() {}
    int type;
    char name;
};
