#include<stdio.h>

int main()
{
    int iCnt = 0;

    iCnt = 1;                               // 1

    while(iCnt <= 4)                        // 2
    {
        printf("Jay Ganesh...\n");          // 4
        iCnt++;                             // 3
    }
    
    return 0;
}




/*

C:\Users\admin\Desktop\PPA\C Programming>gcc iteration3.c -o Myexe

C:\Users\admin\Desktop\PPA\C Programming>Myexe
Jay Ganesh...
Jay Ganesh...
Jay Ganesh...
Jay Ganesh...

*/