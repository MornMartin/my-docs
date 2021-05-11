#include<iostream>
#include<string>
using namespace std;

class Persion{
    public:
        string name;
        Persion(string n);
        void say();
};
Persion::Persion(string n){
    name = n;
};

void Persion::say() {
    cout<<"Hello, I'm"<<name<<endl;
}

int main(){
    Persion p("Lei Wang");
    cout<<p.name<<":";
    p.say();
    return 0;
};
