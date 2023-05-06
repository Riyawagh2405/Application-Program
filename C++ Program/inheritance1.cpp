#include <iostream>
using namespace std ;

class Demo
{
    public:
        int A , B;
        Demo()
        {
            cout<<"Inside Demo constructor "<<"\n";
        }

        void fun()
        {
             cout<<"Inside Demo constructor "<<"\n";

        }

        ~Demo()
        {
            cout<<"Inside fun of Demo"<<"\n";
        }
};

//Child class 
class Hello : public Demo          //class Hello extends Demo
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
            cout<<"inside gun of Hello"<<"\n";
        }
};

class PPA : public Hello
{
    public:
        int I , J ;
        PPA()
        {
            I = 111;
            J = 121;
            cout<<"Inside PPA constructor"<<"\n";
        }
        ~PPA()
        {
            cout<<"Inside PPA destructor"<<"\n";
        }
        void sun()
        {
            cout<<"Inside sun of PPA"<<"\n";
        }
};
int main()
{
    cout<<"Inside main"<<"\n";

    cout<<"Size of Demo : "<<sizeof(Demo)<<"\n";
    cout<<"Size of Hello : "<<sizeof(Hello)<<"\n";
    cout<<"Size of PPA : "<<sizeof(PPA)<<"\n";

    PPA pobj;

    pobj.fun();
    pobj.gun();
    pobj.sun();

    cout<<pobj.A<<"\n";
    cout<<pobj.B<<"\n";
    cout<<pobj.X<<"\n";
    cout<<pobj.Y<<"\n";
    cout<<pobj.I<<"\n";
    cout<<pobj.J<<"\n";

    cout<<"End of main"<<"\n";

    return 0 ;

}



/*

C:\Users\admin\Desktop\PPA\C++Programming>g++ inheritance1.cpp -o Myexe

C:\Users\admin\Desktop\PPA\C++Programming>Myexe
Inside main
Size of Demo : 8
Size of Hello : 16
Size of PPA : 24
Inside Demo constructor 
Inside Hello constructor
Inside PPA constructor
Inside Demo constructor 
inside gun of Hello
Inside sun of PPA
-2
6422280
51
101
111
121
End of main
Inside PPA destructor
Inside Hello destructor
Inside fun of Demo


*/