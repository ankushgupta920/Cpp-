// this is used to copy the value of one object into another object:
#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A()
    {
        a=0; b=0;
    }
    A(int x,int y)
    {
        a=x; b=y;
    }
    A(A &ref)
    {
        a=ref.a;
        b=ref.b;
        cout<<"copy constructor called: "<<endl;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A x(10,20),y,z;
    x.show();
    y.show();
    z.show();
    // z1 should exectly resemble z or y or x:
    A z1(y);
    z1.show();

    
}