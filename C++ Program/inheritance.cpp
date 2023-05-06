#include<iostream>
using namespace std;

// Parent Class
class Demo
{
    public:
        int A,B;
        Demo()
        {
            A = 11;
            B = 21;
            cout<<"Inside Demo constructor"<<"\n";
        }
        ~ Demo()
        {
            cout<<"Inside Demo destructor"<<"\n";
        }        
        void fun()
        {
            cout<<"Inside fun of Demo"<<"\n";
        }
};

// Child class
class Hello : public Demo       // class Hello extends Demo
{
    public:
        int X,Y;
        Hello()
        {
            X = 51;
            Y = 101;
            cout<<"Inside Hello constructor"<<"\n";
        }
        ~Hello()
        {
            cout<<"Inside Hello destructor"<<"\n";
        }
        void gun()
        {
            cout<<"Inside gun of Hello"<<"\n";
        }
};

int main()
{
    Hello hobj;

    hobj.fun();
    hobj.gun();

    cout<<hobj.A<<"\n";
    cout<<hobj.B<<"\n";
    cout<<hobj.X<<"\n";
    cout<<hobj.Y<<"\n";
    
    return 0;
}




/*

C:\Users\admin\Desktop\PPA\C++Programming>g++ inheritance.cpp -o Myexe

C:\Users\admin\Desktop\PPA\C++Programming>Myexe
Inside Demo constructor
Inside Hello constructor
Inside fun of Demo
Inside gun of Hello
11
21
51
101
Inside Hello destructor
Inside Demo destructor


*/