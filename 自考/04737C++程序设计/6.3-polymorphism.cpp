#include<iostream>
using namespace std;

class Base{
    public:
        void func1() {
            cout<<"Base::func1()"<<endl;
            func2();
            func3();
            func4();
        }
        virtual void func2() {
            cout<<"virtual Base::func2()"<<endl;
        }
        void func3() {
            cout<<"Base::func3()"<<endl;
        }
        virtual void func4() {
            cout<<"virtual Base::func4()"<<endl;
        }
        virtual void func4(int i) {
            cout<<"virtual Base::func4(i)"<<endl;
        }
};

class Derive: public Base{
    public:
        void func2() {
            cout<<"virtual Derive::func2()"<<endl;
        }
        void func3() {
            cout<<"Derive::func3()"<<endl;
        }
        virtual void func5() {
            cout<<"virtual Derive::func5()"<<endl;
            func1();
            func2();
            func3();
            this -> Base::func4(0);
        }
};

int main() {
    Derive d;
    d.func1();
    cout<<"---------------------------------------"<<endl;
    d.func5();
    return 0;
};
