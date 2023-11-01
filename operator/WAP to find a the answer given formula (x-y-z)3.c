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
	
	a=(x*x*x)-(3*x*x*y)-(3*x*x*z)+(3*x*y*y)+(6*x*y*z)+(3*x*z*z)-(y*y*y)-(3*y*y*z)-(3*y*z*z)-(z*z*z);
	
	printf("%0.2f",a);
	
}