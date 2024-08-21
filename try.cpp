// #include<iostream>
// using namespace std;
// class Human
// {
//     protected:
//     string name;
//     int age;
//     public:
//     void show()
//     {
        
//     }
// };
// class Male:protected Human
// {
//     public:
//     char gender;
//     void disp()
//     {
//       cout<<"I am Male";
//     }
// };
// class Female:public Human
// {
//     protected :
//     string gender;
//     public:
//     void disp()
//     {
//       cout<<"I am female";
//     }
// };
// class engineer:public Male
// {
//     protected :
//     string gender;
//     public:
//     void disp()
//     {
      
//     }
// };
// class Teacher:public Female
// {
//     protected :
//     string gender;
//     public:
//     void disp()
//     {
      
//     }
// };

// int main()
// {
   
// } 




#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"Enter the array elements:- "<<endl;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are:- "<<endl;
    for(i=4;i>=0;i--)
    {
        cout<<a[i];
    }
return 0;
}