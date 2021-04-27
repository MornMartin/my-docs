#include<iostream>
using namespace std;
void swapValue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"在swapValue函数中"<<"a: "<<a<<", b:"<<b<<endl;
}
void swapRef(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"在swapRef函数中"<<"a: "<<a<<", b:"<<b<<endl;
}
void run() {
    int a = 10;
    int b = 20;
    cout<<"函数执行前,"<<" a:"<<a<<", b:"<<b<<endl;
    swapValue(a, b);
    cout<<"函数swapValue执行后,"<<" a:"<<a<<", b:"<<b<<endl;
    swapRef(a, b);
    cout<<"函数swapRef执行后,"<<" a:"<<a<<", b:"<<b<<endl;
}
int main() {
    int a = 1;
    int &b = a;
    int c = b;
    cout<<"b:"<<b<<endl;
    cout<<"&b:"<<&b<<endl;
    cout<<"c:"<<c<<endl;
    run();
    return 0;
}