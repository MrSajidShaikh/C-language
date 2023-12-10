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
	
	printf("Enter array A's element : \n");
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
		}
			printf("\n");
	}
			printf("\n");
	
	printf("Enter array B's element : \n");
	
	int b[x][y];
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
			
		}
			printf("\n");
	}
		
	int c[x][y];
	
	printf("Array C is : \n");
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			
			printf("%d ",c[i][j]);
		}
			printf("\n");
	}
	
		
		
	
	
	
	
	
	
	
	
	
}