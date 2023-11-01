#include<stdio.h>
#include<conio.h>
main()
{
	float a,x,y;
	
	printf("enter the value of x=");
	scanf("%f,",&x);
	
	printf("\nenter the value of y=");
	scanf("%f",&y);
	
	a=(x*x)+(2*x*y)+(y*y);
	printf("%0.2f",a);
}