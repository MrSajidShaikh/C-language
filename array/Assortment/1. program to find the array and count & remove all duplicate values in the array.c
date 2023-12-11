#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	
	printf("Enter the size of array := ");
	scanf("%d",&x);
	
	int i,j,y[x],z;
	
		printf("\nEnter the elements of array : \n");
	
	for(i=0;i<x;i++)
	{
		printf("y[%d] = ",i);
		scanf("%d",&y[i]);
	}
	
	z=sizeof(y[x]);
	printf("Size of the given array is := %d ",z);
	
	for(i=0;i<x;i++)
	{
		
	}
	

	
}