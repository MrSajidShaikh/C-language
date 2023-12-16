#include<stdio.h>
#include<conio.h>
main()
{
	printf("find the area of square");
	int x; //x=sides of square
	
	printf("\nenter the value of side :=");
	scanf("%d",&x);
	
	int area = x*x;  // area of square = side*side

	printf("\narea of square is %d ",area);
}