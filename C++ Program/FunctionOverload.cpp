#include<iostream>
using namespace std ;

class Demo
{
    public:
    int Addition (int No1, int No2)                      //Addition@2ii(Demo *this, int No1, int No2)
    {
        cout<<"Addition of 2 integers "<<"\n";
        return No1 + No2 ;
    }

    int Addition(int No1 ,int No2, int No3 )             //Addition@3iii(Demo *this, int No1, int No2, int No3)
    {
        cout<<"Addition of 3 integers "<<"\n";
        return No1 + No2 + No3;
    }

    float Addition(float No1 , float No2)                 //Addition@2ff(Demo *this, float No1, float No2)
    {
        cout<<"Addition of 2 floats "<<"\n";
        return No1 + No2 ;
    }

    double Addition(double No1 , double No2)              //Addition@2dd(Demo *this, double No1)
    {
        cout<<"Addition of 2 doubles"<<"\n";
        return No1 + No2 ;
    }
};

int main()
{
    Demo obj;
    int iRet = obj.Addition(10,11);                        //Addition@2ii(&obj,10,11)
    cout<<"Addition of integers is : "<<iRet<<"\n";

    iRet = obj.Addition(10,11,51);
    cout<<"Addition of integers is : "<<iRet<<"\n";        //Addition@3iii(&obj,10,11,51)

    float fRet = obj.Addition(10.5f,90.7f);
    cout<<"Addition of floats is : "<<fRet<<"\n";          //Addition@2ff(&obj,10.5f,90.7f)

    double dRet = obj.Addition(10.5,90.7);
    cout<<"Addition of doubles is : "<<dRet<<"\n";         //Addition@2dd(&obj,10.5,90.7)

    return 0 ;


}