#include<iostream>
using namespace std;
int main() {
    int oneInit = 1;
    int & ref = oneInit;
    ref = 2;
    cout<<"oneInit:"<<oneInit<<" ref:"<<ref<<endl;// oneInit:2 ref:2
    int *p = &ref;
    *p = 3;
    cout<<"*p"<<*p<<" ref:"<< ref<<" oneInt: "<<oneInit<<endl;//*p3 ref:3 oneInt: 3
    return 0;
}
