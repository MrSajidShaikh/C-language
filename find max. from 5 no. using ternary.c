#include<stdio.h>
#include<conio.h>
main()
{
	int v,w,x,y,z;
	
	printf("Enter any value:=");
	scanf("%d",&v);
	
	printf("Enter any value:=");
	scanf("%d",&w);
	
	printf("Enter any value:=");
	scanf("%d",&x);
	
	printf("Enter any value:=");
	scanf("%d",&y);
	
	printf("Enter any value:=");
	scanf("%d",&z);
	
	(v>w && v>x && v>y && v>z) ? (printf("%d is maximum number",v)):(w>x && w>y && w>z) ? (printf("%d is maximum number.",w)):(x>y && x>z) ? (printf("%d is maximum number.",x)) : (y>z) ? (printf("%d is maximum number.",y)) : (printf("%d is maximum number.",z));									
}