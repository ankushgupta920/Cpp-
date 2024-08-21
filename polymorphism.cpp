// polymorphism is a concept in which an object can be treated in different ways.
// Compile time polymorphism:  (function overloading)

// #include<iostream>
// using namespace std;
// void showinfo(int age)
// {
//     cout<<age<<endl;
// }
// void showinfo(string name)
// {
//     cout<<name<<endl;
// }
// void showinfo(double salary)
// {
//     cout<<salary<<endl;
// }
// int main()
// {
//     showinfo(10);
//     showinfo("Ankush");
//     showinfo(107373.5);
// }

// Run Time polymorphism: (overridding)
#include<iostream>
using namespace std;
class A
{
    public:
    virtual void disp()
    {
        cout<<"it's class A ";
    }
};
class B:public A
{
    public:
    void disp()
    {
        cout<<"it's class B ";
    }
};
int main()
{
    A *p; B obj;
    p=&obj;
    p->disp();
    
}