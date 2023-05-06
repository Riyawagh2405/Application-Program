#include<stdio.h>

void Demo()
{
	static int No=10;
	No++;

	printf("%d\n",No);
}

int main()
{
	Demo ();
	Demo ();
	Demo ();
	
	return 0;
}




/*

C:\Users\admin\Desktop\PPA\C Programming>gcc static_demo.c -o Myexe

C:\Users\admin\Desktop\PPA\C Programming>Myexe
11
12
13


*/