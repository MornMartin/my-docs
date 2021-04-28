#include<iostream>
using namespace std;
int main() {
    int x = 0;
    int y = 1;
    int *a = &x; // 指针类型的变量只能赋值一个引用
    cout<<"*a: "<<*a<<endl; // 指针指向的值
    cout<<"a: "<<a<<endl;// 指针本身

    int const *b = a;
    cout<<"*b:"<<*b<<endl;
    cout<<"b:"<<b<<endl;
    b = &y;
    // *b = 10; //报错，不能通过指针修改对应的数据
    cout<<"b = &y;"<<endl;
    cout<<"*b:"<<*b<<endl;
    cout<<"b:"<<b<<endl;

    int * const c = &x;
    cout<<"*c:"<<*c<<endl;
    cout<<"c:"<<c<<endl;
    // c = &y;// 报错，不可修改常变量对指针的引用
    *c = 20;
    cout<<"*c = 20;"<<endl;
    cout<<"*c:"<<*c<<endl;
    cout<<"c:"<<c<<endl;

    const int * const d = &x;
    // d = &y; // 报错
    // *d = 20; // 报错
}