#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        Demo()  // Default constructor
        {
            cout<<"Inside default constructor\n";
            No1 = 0;
            No2 = 0;
        }

        Demo(int A, int B) // Parametrised constructor
        {
            cout<<"Inside parametrised constructor\n";
            No1 = A;
            No2 = B;
        }

        Demo(Demo &ref) // Copy constructor
        {
            cout<<"Inside copy constructor\n";
            No1 = ref.No1;
            No2 = ref.No2;
        }

        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }

        void fun()
        {
            cout<<"Inside fun\n";
        }
        void gun()
        {
            cout<<"Inside gun\n";
        }
};

int main()
{
    cout<<"Inside main\n";

    Demo obj1;
    cout<<"Value of No1 from obj1 is : "<<obj1.No1<<"\n";
    cout<<"Value of No2 from obj1 is : "<<obj1.No2<<"\n";

    Demo obj2(11,21);
    cout<<"Value of No1 from obj2 is : "<<obj2.No1<<"\n";
    cout<<"Value of No2 from obj2 is : "<<obj2.No2<<"\n";

    Demo obj3(obj2);
    cout<<"Value of No1 from obj3 is : "<<obj3.No1<<"\n";
    cout<<"Value of No2 from obj3 is : "<<obj3.No2<<"\n";

    return 0;
}











/*


C:\Users\admin>cd Desktop

C:\Users\admin\Desktop>cd PPA

C:\Users\admin\Desktop\PPA>cd C++ Programming
The system cannot find the path specified.

C:\Users\admin\Desktop\PPA>cd C++Programming

C:\Users\admin\Desktop\PPA\C++Programming>g++ Constructor.cpp -o Myexe

C:\Users\admin\Desktop\PPA\C++Programming>Myexe
Inside main
Inside default constructor
Value of No1 from obj1 is : 0
Value of No2 from obj1 is : 0
Inside parametrised constructor
Value of No1 from obj2 is : 11
Value of No2 from obj2 is : 21
Inside copy constructor
Value of No1 from obj3 is : 11
Value of No2 from obj3 is : 21
Inside Destructor
Inside Destructor
Inside Destructor



*/