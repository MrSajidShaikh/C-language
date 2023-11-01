#include<stdio.h>
#include<conio.h>
main()
{
	float x,y,a;
	
	printf("enter the value of x=");
	scanf("%f",&x);
	
	printf("enter the value of y=");
	scanf("%f",&y);
	
	a=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	
	printf("%0.2f",a);
}