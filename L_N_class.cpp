// Local Class:
// #include<iostream>
// using namespace std;
// void fun()
// {
//     class A
//     {
//         int a,b;
//         public:
//         void show()
//         {
//             cout<<"Enter Two numbers: ";
//             cin>>a>>b;
//             cout<<a<<" "<<b;
//         }
//     };
//     A obj;
//     obj.show();
// }
// int main()
// {
//     fun();
// }


// Nasted class
#include<iostream>
using namespace std;
class A
{
    public:
    class B // member variable of class A
    {
        int a,b;
        public:
        void input()
        {
            cout<<"Enter Two numbers: ";
            cin>>a>>b;
        }
        void show()
        {
            cout<<a<<" "<<b<<endl;
        }

    };
};
int main()
{
    A::B obj;
    obj.input();
    obj.show();
}