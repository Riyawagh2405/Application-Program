#include<iostream>
using namespace std;
// Constant function is such a function which cannot change the value of its caller object
class Demo
{
    public:
        int A;
        int B;
        const int C;
        const int D;

        Demo() : C(11), D(21)
        {
            A = 0;
            B = 0;
        }
        Demo(int i, int j, int k, int l) : C(k), D(l)
        {
            A = i;
            B = j;
        }
        void fun()
        {
            A++;    // A
            B++;    // A
//            C++;    // NA
//            D++;    // NA
        }
        void gun() const
        {
//            A++;    // NA
//            B++;    // NA
//            C++;    // NA
//            D++;    // NA
        }
};

int main()
{
    Demo obj1(11,21,51,101);
    const Demo obj2(11,21,51,101);

    obj1.fun();
    obj1.gun();

    obj1.fun();
    obj2.gun();

    return 0;
}


/*

C:\Users\admin\Desktop\PPA\C++Programming>g++ Constfunction.cpp -o Myexe

C:\Users\admin\Desktop\PPA\C++Programming>Myexe


*/