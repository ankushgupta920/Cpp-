#include<iostream>
using namespace std;
class A
{
    protected:
    int a,b;
    public:
    void show()
    {
        a=10; b=20;
        cout<<a<<" "<<b<<endl;
    }
};
class B:public A
{
    public:
    void disp()
    {
        a=30; b=40;
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    B obj;
    obj.disp();
    obj.show();
} 