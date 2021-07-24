#include <iostream>
using namespace std;

class Base {
    private: 
        int x;
    public:
        Base() {
            cout<<"Base 构造函数"<<endl;
        };
        ~Base() {
            cout<<"Base 析构函数"<<endl;
        }
};
class Derived: Base{
    public:
        Derived(): Base() {
            cout<<"Derived 构造函数"<<endl;
        };
        ~Derived() {
            cout<<"Derived 析构函数"<<endl;
        };
};

class Compile{
    private:
        Derived d;
    public:
        Compile() {
            cout<<"Compile 构造函数"<<endl;
        };
        ~Compile() {
            cout<<"Compile 析构函数"<<endl;
        };
};

int main() {
    Compile c;
    return 0;
};
