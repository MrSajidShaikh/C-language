#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	
	printf("Enter array's row size := ");
	scanf("%d",&x);
	
	printf("Enter the array's column size := ");
	scanf("%d",&y);
	
	printf("\n");
	
	int a[x][y],i,j;
	float sum=0;
	
	printf("Enter array's element : \n");
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			sum=sum+a[i][j];
		}
	}
		printf("\nsum of array := %0.2f",sum/(a*b);
		
		
		
		
		
		
		
}