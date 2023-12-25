#include<stdio.h>
#include<conio.h>
main()
{
	printf("find area of circle");
	int r; //r=radius;
	const float pi=3.14;
	
	printf("\nenter the value of radius :=");
	scanf("%d",&r);
	
	//area of circle=pi*r*r;
	float a;
	a = pi*r*r;
	printf("\narea of circle is %0.2fcm2",a);
}
