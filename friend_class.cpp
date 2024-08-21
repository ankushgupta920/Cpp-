// it is class that granted accessiblity of private or protected member of another class
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
    void add(A ref)
    {
        int add=ref.a+ref.b;
        cout<<"Add: "<<add<<endl;
    }
};
int main()
{
    A obj; B obj2;
    obj.show();
    obj2.add(obj);
} 