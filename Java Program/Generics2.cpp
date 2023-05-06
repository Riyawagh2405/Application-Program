using namespace std;
#include<iostream>
//Application for Generic programming
template <class T>      //Templet Header
T Addition(T i, T j)    //T - Templet Argument
{
    T result;
    result = i + j ;
    return result;
}



int main()
{
    int i;
    float f;
    double d;

    i = Addition(10,11);
    cout<<i<<"\n";

    f = Addition(10.7f,89.5f);
    cout<<f<<"\n";

    d = Addition(10.8,70.8);
    cout<<d<<"\n";

    return 0;
}




/*


C:\Users\admin\Desktop\PPA\Java Programming>g++ Generics2.cpp -o Myexe

C:\Users\admin\Desktop\PPA\Java Programming>Myexe
21
100.2
81.6


*/
