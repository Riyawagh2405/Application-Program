#include<stdio.h>

int main()
{
    register int iCnt = 0;

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
    
    return 0;
}


/*

C:\Users\admin\Desktop\PPA\C Programming>gcc iteration2.c -o Myexe

C:\Users\admin\Desktop\PPA\C Programming>Myexe
Jay Ganesh...
Jay Ganesh...
Jay Ganesh...
Jay Ganesh...


*/