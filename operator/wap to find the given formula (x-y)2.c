#include<stdio.h>
#include<conio.h>
main()
{
	float x,y,a;
	
	printf("enter the value of x=");
	scanf("%f",&x);
	
	printf("enter the value of y=");
	scanf("%d",&y);
	
	a=(x*x)-(2*x*y)+(y*y);
	
	printf("%0.2f",a);
}