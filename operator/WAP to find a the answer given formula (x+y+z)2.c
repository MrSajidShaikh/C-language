#include<stdio.h>
#include<conio.h>
main()
{
	float x,y,z,a;
	
	printf("enter the value of x=");
	scanf("%f",&x);
	
	printf("enter the value of y=");
	scanf("%f",&y);
	
	printf("enter the value of z=");
	scanf("%f",&z);
	
	a=(x*x)+(2*x*y)+(2*x*z)+(y*y)+(2*y*z)+(z*z);
	
	printf("%0.2f",a);
}