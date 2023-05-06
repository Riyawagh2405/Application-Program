#include<stdio.h>

int main()
{
	int std=0;

	printf("Enter your standard ; \n");
	scanf("%d",&std);

	switch(std)
	{
		case 1:
			printf("Your exam is at 1 pm \n");
			break;

		case 2:
			printf("Your exam is at 2 pm \n");

		case 3:
			printf("Your exam is at 3 pm \n");

		case 4:
			printf("Your exam is at 4 pm \n");

		default:
			printf("Invalid standard\n");}

	return 0;
}