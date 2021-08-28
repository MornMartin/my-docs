#include <iostream>
#include<fstream>
using namespace std;

int main() {
    string s;
    string temp;
    freopen("7.2.1-readFile.dat", "r", stdin);
    do
    {
        // cin读取文件内容，每遇到空白字符时停止
        cin>>temp;
        s += temp;
        cout<<temp<<endl;
    } while (!cin.eof());

    cout<<s<<endl;

    return 0;
};

