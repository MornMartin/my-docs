#include<iostream>
using namespace std;
class A{
    public: 
        int fun(double);
        int fun(int);
};
int A::fun(double x){
    return int(x) / 2;
}
int A::fun(int x){
    return x * 2;
}
int main() {
    A a;
    int s = a.fun(6.0) + a.fun(2);
    cout<<s<<endl;//7
    return 0;
}
