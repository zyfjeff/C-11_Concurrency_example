#include <vector>
#include <string>
#include <initializer_list>

using namespace std;

class people {
  public:
    people(initializer_list<string> l) {
        auto i = l.begin();
        for(;i != l.end(); ++i) 
            name_.push_back(*i);
    }
  private:
    vector<string> name_;
};

int main()
{
    people p{"name1","name2"};
}
