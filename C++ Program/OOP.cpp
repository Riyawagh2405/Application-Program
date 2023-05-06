//Class = characteristics + behaviour
//Class = Data + Function

#include<iostream>
using namespace std;

class Demo 
{
    public:
        int No1;
        int No2;

        void fun()
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    Demo obj1 ;
    Demo obj2 ;

    cout<<"Size of object : "<<sizeof(obj1)<<"\n";   //8
    obj1.No1 =10;
    obj1.No2 =20;

    obj2.No1 =30;
    obj2.No2 =40;

    obj1.fun();
    obj2.fun();

    cout<<obj1.No2<<"\n";    //20

    return 0;
}


/*

C:\Users\admin\Desktop\PPA\C++Programming>g++ OOP.cpp -o Myexe

C:\Users\admin\Desktop\PPA\C++Programming>Myexe
Size of object : 8
Inside fun
Inside fun
20


*/