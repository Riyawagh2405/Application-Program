#include<iostream>
using namespace std;

template <class T>
class MarvellousArray
{
    private:
        T *Arr;
        int iSize;

    public:
        MarvellousArray(int Length)
        {
            cout<<"Inside Constructor"<<"\n";
            iSize = Length;
            Arr = new T[iSize];
        }
        ~MarvellousArray()
        {
            cout<<"Inside Destructor"<<"\n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the values : "<<"\n";
            for(int i = 0; i< iSize; i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"Elements of array are : "<<"\n";
            for(int i = 0; i< iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        T Addition()
        {
            T iSum = 0;
            for(int i = 0; i < iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        }
};

int main()
{    
    MarvellousArray <int> mobj1(6);
    MarvellousArray <float> mobj2(4);

    mobj1.Accept();
    mobj1.Display();

    mobj2.Accept();
    mobj2.Display();

    int iRet = 0;
    iRet = mobj1.Addition();
    cout<<"Addition of mobj1 : "<<iRet<<"\n";

    float fRet = 0 ;
    fRet = mobj2.Addition();
    cout<<"Addition of mobj2 : "<<fRet<<"\n";

    
    return 0;
}




/*


C:\Users\admin\Desktop\PPA\Java Programming>g++ ClassDesignGeneric.cpp -o Myexe

C:\Users\admin\Desktop\PPA\Java Programming>Myexe
Inside Constructor
Inside Constructor
Enter the values :
10
20
30
40
50
60
Elements of array are :
10
20
30
40
50
60
Enter the values :
10.1
20.1
30.1
40.1
Elements of array are :
10.1
20.1
30.1
40.1
Addition of mobj1 : 210
Addition of mobj2 : 100.4
Inside Destructor
Inside Destructor


*/