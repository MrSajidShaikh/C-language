#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter the size of array := ");
	scanf("%d",&a);
	
	int i,j,b[a];
	
	printf("Enter the elements of array : \n");
	
	for(i=0;i<a;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	int temp=0 ;
	
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	
	printf("Ascending order := ");
	
	for(i=0;i<a;i++)
	{
		printf("%d ",b[i]);
	}
	
	
	
}