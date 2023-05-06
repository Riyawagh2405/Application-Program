#include<stdio.h>

int main()
{
	int No = 0;
	printf("Enter number : \n");
	scanf("%d",&No);

	if((No%2)==2)
	{
		printf("It is even number...\n");
	}
	else
	{
		printf("It is odd number...");
	}
	return 0;
}