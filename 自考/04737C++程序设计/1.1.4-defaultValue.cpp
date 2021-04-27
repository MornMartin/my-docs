#include<iostream>
using namespace std;
void func(int a, int b = 1, int c = 2, int d = 3, int e = 4){
    cout<<"Loaded:"<<endl;
    cout<<"a:"<<a<<" b:"<<b<<" c"<<c<<" d:"<<d<<" e:"<<e<<endl;
}
int main() {
    cout<<"When intput"<<endl;
    cout<<"a:"<<0<<" b:"<<0<<" c"<<0<<" d:"<<0<<" e:"<<0<<endl;
    func(0, 0, 0, 0, 0);
    cout<<"When intput"<<endl;
    cout<<"a:"<<1<<" b:"<<2<<" c"<<3<<" d:"<<4<<" e:"<<5<<endl;
    func(1, 2, 3, 4, 5);
    cout<<"When intput"<<endl;
    cout<<"a:"<<1<<endl;
    func(1);
    cout<<"When intput"<<endl;
    cout<<"a:"<<1<<" b:"<<9<<endl;
    func(1, 9);
    return 0;
}