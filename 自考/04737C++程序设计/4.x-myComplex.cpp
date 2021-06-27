#include <iostream>
using namespace std;

class myComplex {
    private:
        int real, imag;
    public:
        myComplex(int r = 0, int i = 0): real(i), imag(i) {};
        friend myComplex operator+(const myComplex &a,const myComplex &b) {
            int r = a.real + b.real;
            int i = a.imag + b.imag;
            return myComplex(r, i);
        };
        friend ostream & operator<<(ostream & os, const myComplex & a){
            os<<"real: "<<a.real<<", imag: "<<a.imag<<endl;
            return os;
        };
};

int main() {
    myComplex a(1, 2), b(3, 4), c;
    c = a + b;
    cout<<c<<endl;
    return 0;
};
