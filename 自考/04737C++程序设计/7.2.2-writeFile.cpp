#include<iostream>
#include<fstream>
using namespace std;

void done() {
    cout<<"done!"<<endl;
}

int main() {
    int count = 999;
    int num[count];
    freopen("7.2.2-writeFile.dat", "w", stdout);
    for (int i = 0; i < count; i++)
    {
        num[i] = i * 100;
        cout<<num[i]<<" ";
    }
    // 重新定向至控制台打印
    freopen("CON", "w", stdout);
    cout<<"done~!"<<endl;
    return 0;
};

