#include<iostream>
using namespace std;
class A
{
    int a=10,b=20;
    public:
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend class B;
};
class B
{
    public:
    void disp(A ref)
    {
        ref.a=30; ref.b=40;
        cout<<ref.a<<" "<<ref.b<<endl;
    }
};
int main()
{
    A obj; B obj2;
    obj.show();
    obj2.disp(obj);
} 