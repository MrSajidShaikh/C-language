#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	
	printf("Enter any number:=");
	scanf("%d",&x);
	
	(x % 2 == 0) ? printf("%d is even number.",x) : printf("%d is odd number.",x);
	
}