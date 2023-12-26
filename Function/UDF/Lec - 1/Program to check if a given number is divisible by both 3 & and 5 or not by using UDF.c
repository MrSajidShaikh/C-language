#include<stdio.h>
#include<conio.h>

void input()
{
	int x;
	
	printf("Enter any no. := ");
	scanf("%d",&x);
	
	if(x%3==0 && x%5==0)
	{
		printf("Given no. is divisible by both 3 and 5.\n");
	}
	else if(x%5==0)
	{
		printf("Given no. is divisible by 5.\n");
	}
	else if(x%3==0)
	{
		printf("Given no. is divisible by 3.\n");
	}
	else
	{
		printf("Given no. is not divisible by 3 nor 5.\n");
	}
}

main()
{
	input();
}