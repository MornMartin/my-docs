#include <iostream>
#include <cmath>
using namespace std;

class CShape {
    protected:
        double acreage;
    public:
        CShape() {
            cout<<"基类构造函数"<<endl;
        };
        virtual ~CShape() {
            cout<<"基类析构函数"<<endl;
        };
        virtual double CalAcr() {
            return 0;
        };
        virtual void setAcreage() {};
        virtual void printInfo() {};
};

class CRectangle: public CShape {
    private:
        double width, height;
    public:
        CRectangle(double w, double h) {
            cout<<"矩形带参构造函数"<<endl;
            this -> width = w;
            this -> height = h;
        };
        CRectangle() {
            cout<<"矩形无参构造函数"<<endl;
            this -> width = 0;
            this -> height = 0;
        };
        ~CRectangle() {
            cout<<"矩形析构函数"<<endl;
        };
        virtual double CalAcr();
        virtual void setAcreage(double);
        virtual void printInfo();
};

class CCircle: public CShape {
    private:
        double radius;
    public:
        CCircle(double r) {
            cout<<"圆形带参构造函数"<<endl;
            this -> radius = r;
        };
        CCircle() {
            cout<<"圆形无参构造函数"<<endl;
            this -> radius = 0;
        };
        ~CCircle() {
            cout<<"圆形析构函数"<<endl;
        };
        virtual double CalAcr();
        virtual void setAcreage(double);
        virtual void printInfo();
};

class CTriangle: public CShape {
    private:
        double a, b, c;
    public:
        CTriangle(double a, double b, double c) {
            cout<<"三角形带参构造函数"<<endl;
            this -> a = a;
            this -> b = b;
            this -> c = c;
        };
        CTriangle() {
            cout<<"三角形无参构造函数"<<endl;
            this -> a = 0;
            this -> b = 0;
            this -> c = 0;
        };
        ~CTriangle() {
            cout<<"三角形析构函数"<<endl;
        };
        virtual double CalAcr();
        virtual void setAcreage(double);
        virtual void printInfo();
};

double CRectangle::CalAcr() {
    return width * height;
};

void CRectangle::setAcreage(double acre) {
    this -> acreage = acre;
};

void CRectangle::printInfo() {
    cout<<"矩形"<<endl;
    cout<<"\t 宽度："<<this -> width<<endl;
    cout<<"\t 长度："<<this -> height<<endl;
    cout<<"\t 面积："<<this -> acreage<<endl;
};

double CCircle::CalAcr() {
    return 3.14 * radius * radius;
};

void CCircle::setAcreage(double acre) {
    this -> acreage = acre;
};

void CCircle::printInfo() {
    cout<<"圆形"<<endl;
    cout<<"\t 半径："<<this -> radius<<endl;
    cout<<"\t 面积："<<this -> acreage<<endl;
};

double CTriangle::CalAcr() {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
};

void CTriangle::setAcreage(double acre) {
    this -> acreage = acre;
};

void CTriangle::printInfo() {
    cout<<"三角形"<<endl;
    cout<<"\t 三条边："<<this -> a<<", "<<this -> b<<", "<<this -> c<<endl;
    cout<<"\t 面积："<<this -> acreage<<endl;
};

int main() {
    CShape *pShapes[100];
    CRectangle *pr;
    CCircle * pc;
    CTriangle * pt;
    int i, n;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        char c;
        double temp1, temp2, temp3;
        cin>>c;
        switch (c)
        {
        case 'c':
        case 'C':
            cout<<"定义圆形"<<endl;
            cin>>temp1;
            pc = new CCircle(temp1);
            pc -> setAcreage(pc -> CalAcr());
            pShapes[i] = pc;
            break;
        case 'r':
        case 'R':
            cout<<"定义矩形"<<endl;
            cin>>temp1>>temp2;
            pr = new CRectangle(temp1, temp2);
            pr -> setAcreage(pr -> CalAcr());
            pShapes[i] = pr;
            break;
        case 't':
        case 'T':
            cout<<"定义三角形"<<endl;
            cin>>temp1>>temp2>>temp3;
            pt = new CTriangle(temp1, temp2, temp3);
            pt -> setAcreage(pt -> CalAcr());
            pShapes[i] = pt;
            break;
        };
    };
    cout<<"累计定义图形："<<n<<endl;
    for ( i = 0; i < n; i++)
    {
        pShapes[i] -> printInfo();
    }
    
    return 0;
};
