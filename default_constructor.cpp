// #include<iostream>
// using namespace std;
// class A
// {
//     int a;
//     public:
//     A()
//     {
//         a=100;
//         cout<<a;
//     }
// };
// int main()
// {
//     A obj;
// }

#include<iostream>
using namespace std;
class Test
{
    private:
    int a,b;
    public:
    Test()
    {
        cout<<"enter the values : ";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
    }
    Test(int x,int y)
    {
        a=x;
        b=y;
        cout<<a<<" "<<b<<endl;
    }
    Test(Test &ref)
    {
        a=ref.a;
        b=ref.b;
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    Test x,y(10,20),z(x);
    

}