#include <iostream>
using namespace std;

class pointer {
    public:
        int a;
        int *p;
        pointer(){
            this->a = 10;
            this->p = new int(200);
        };
        pointer(const pointer & temp) {
            if (this != &temp) {
                this -> a = temp.a;
                this -> p = temp.p;
            }
            
        }
};

int main() {
    pointer p1;
    cout<<"p1.a: "<<p1.a<<", p1.p: "<<*p1.p<<endl;
    pointer p2(p1);
    p2.a = 100;
    *p2.p = 20;
    cout<<"p1.a: "<<p1.a<<", p1.p: "<<*p1.p<<endl;
    cout<<"p2.a: "<<p2.a<<", p2.p: "<<*p2.p<<endl;
    return 0;
};