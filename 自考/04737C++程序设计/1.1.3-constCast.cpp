#include<iostream>
using namespace std;
int main(){
    int a  = 1;
    float b = 1.2;
    int *c = &a;
    float *d  = &b;
    int *e;
    float *f;
    // e = const_cast<int *>(b); // 会报错
    e = const_cast<int *>(c);
    f = const_cast<float *>(d);
    a = 2;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;
    cout<<"*c:"<<*c<<endl;
    cout<<"d:"<<d<<endl;
    cout<<"*d:"<<*d<<endl;
    cout<<"e:"<<e<<endl;
    cout<<"*e:"<<*e<<endl;
    cout<<"f:"<<f<<endl;
    cout<<"*f:"<<*f<<endl;
    return 0;
}