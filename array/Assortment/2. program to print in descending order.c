#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	
	printf("Enter the size of array := ");
	scanf("%d",&x);
	
	int i,j,y[x];
	
	printf("Enter the elements of array : \n");
	
	for(i=0;i<x;i++)
	{
		printf("y[%d] = ",i);
		scanf("%d",&y[i]);
	}
	
	int temp=0;
	
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(y[i]<y[j])
			{
				temp=y[i];
				y[i]=y[j];
				y[j]=temp;
				
			}
		}
	}
	
	printf("\n Descending order := ");
	
	for(i=0;i<x;i++)
	{
		printf("%d ",y[i]);
	}
	
	
	
	
	
	
	
}