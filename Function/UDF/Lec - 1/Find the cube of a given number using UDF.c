#include<stdio.h>
#include<conio.h>

void cube()
{
	int x;
	
	printf("Enter any no. := ");
	scanf("%d",&x);
	
	printf("The cube of given no. is '%d'",x*x*x);
}

main()
{
	cube();
}