#include<stdio.h>
#include<conio.h>
main()
{
	printf("perimeter of circlr");
	
	int r; //r=radius
	const float pi=3.14;
	
	printf("\nenter the value of radius=");
	scanf("%d",&r);
	
	float p; //p=perimeter of circle
	p=2*pi*r; // perimeter of circle=2*pi*radius
	
	printf("\nperimeter of circle=%0.2f",p);
	
}