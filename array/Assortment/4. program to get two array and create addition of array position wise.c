#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter the size of array := ");
	scanf("%d",&a);
	
	printf("\n");
	
	int b[a],c[a],i;
	
	printf("enter the elements of B's array : \n");
	
	for(i=0;i<a;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	printf("Enter the elements of C's array : \n");
	
	for(i=0;i<a;i++)
	{
		printf("c[%d] = ",i);
		scanf("%d",&c[i]);
	}
	
	int d[i];
	
	for(i=0;i<a;i++)
	{
		d[i]=b[i]+c[i];
	}
	
	printf("\n Sum of array := ");
	
	for(i=0;i<a;i++)
	{
		printf("%d",d[i]);
	}
	
}