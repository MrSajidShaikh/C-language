#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter Array Size := ");
	scanf("%d",&a);
	
	printf("Enter the elements of array : \n");
	
	int i,x[a];
	
	for(i=0; i<a; i++)
	{
		printf("a[%d] = ",i);
		scanf("\n%d",&x[i]);
	}
	
	printf("Reverse elements of array are : ");
	
	for(i=a-1; i>=0; i--)
	{
		printf("%d ",x[i]);
		
	}
}