#include <iostream>
using namespace std;

class Base {
    private:
        int x;
    public:
        Base(int a): x(a){
            cout<<"Base 构造函数"<<endl;
        };
        int getX() {
            cout<<"Base getX"<<endl;
            return x;
        };
};

class Derived: public Base {
    private:
        int x, y;
    public:
        Derived(int a = 0, int b = 0): x(a), y(b), Base(a+1){
            cout<<"Derived 构造函数"<<endl;
        };
        int getX() {
            cout<<"Derived getX"<<endl;
            return x;
        };
};

int main() {
    Derived d;
    cout<<d.getX()<<endl;
    cout<<d.Base::getX()<<endl;
    return 0;
}