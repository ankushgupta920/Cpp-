#include<iostream>
using namespace std;
class Person
{
    int age;
    string name;
    string address;
    public:
    void input()
    {
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Address: ";
        cin>>address;
    }
    void show()
    {
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
    }
};
int main()
{
   Person ankush,rajat,aniket;
   ankush.input();
   ankush.show();
   rajat.input();
   rajat.show();
   aniket.input();
   aniket.show();
}