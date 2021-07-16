#include <iostream>
using namespace std;

class Base {
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        Base(int a): x(a){};
        int getX() {
            return x;
        };
        void setY(int a) {
            y = a;
        };
        void setZ(int a) {
            z = a;
        }
};

class Derived1: public Base {
    public:
        Derived1(int a = 0): Base(a+1){};
};

class Derived11: public Derived1 {
    public:
        Derived11(int a = 0): Derived1(a+1){
            setZ(99);
        };
};
class Derived2: protected Base {
    public:
        Derived2(int a = 0): Base(a+1){};
        int getZ() {
            return z;
        };
};

class Derived22: public Derived2 {
    public:
        Derived22(int a = 0): Derived2(a+1){};
};

class Derived3: private Base {
    public:
        Derived3(int a = 0): Base(a+1){};
        int getX() {
            return Base::getX();
        }
        int getY() {
            return y;
        };
        int getZ() {
            return z;
        }
};

class Derived33: public Derived3 {
    public:
        Derived33(int a = 0): Derived3(a+1){};
};
int main() {
    Derived1 d1;
    Derived11 d11;
    Derived2 d2;
    Derived22 d22;
    Derived3 d3;
    Derived33 d33;
    cout<<d1.z<<endl;
    cout<<d11.z<<endl;
    // cout<<d2.z<<endl; // 无法在类的外部访问z
    // cout<<d22.z<<endl;
    cout<<d2.getZ()<<endl;
    cout<<d22.getZ()<<endl;
    cout<<d3.getX()<<endl;
    cout<<d33.getX()<<endl;
    return 0;
}