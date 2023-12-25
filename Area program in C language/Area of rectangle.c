#include<stdio.h>
#include<conio.h>
main()
{
	printf("find the area of rectangle");
	
	int l,b; // l=length , b=breadth
	
	printf("\nenter the value of length=");
	scanf("%d",l);
	
	printf("\nenter the value of breadth=");
	scanf("%d",b);
	
	int area;
	area = l*b; //area of rectangle = length * breadth
	
	printf("\narea of rectangle is%dsq unit",area);
}
