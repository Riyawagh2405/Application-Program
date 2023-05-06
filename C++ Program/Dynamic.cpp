#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    int Arr[5];              //static memory allocation

    int *p = NULL;
    p = (int *)malloc (5 * sizeof(int));           //Dynamic memory allocation



    return 0 ;
}








/*

C:\Users\admin\Desktop\PPA\C++Programming>g++ Dynamic.cpp -o Myexe

C:\Users\admin\Desktop\PPA\C++Programming>Myexe


*/