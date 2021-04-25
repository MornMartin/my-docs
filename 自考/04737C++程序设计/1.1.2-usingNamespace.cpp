#include<iostream>
#include "1.1.2-defineNamespace.h"

using namespace hello;
using namespace std;

int main() 
{
    // 直接使用和通过标示符使用；
    cout<<"a:"<<a<<", b:"<<hello::b<<endl;
    return 0;
}
