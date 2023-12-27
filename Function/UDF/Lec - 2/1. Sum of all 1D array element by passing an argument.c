#include<stdio.h>
#include<conio.h>
void array(int sum)
{
	printf("\nSum of array is %d.",sum);
}
main()
{
	int x;
	printf("Enter size of array : ");
	scanf("%d",&x);
	
	int a[x];
	printf("\nEnter elements of array : \n");
	
	int i,sum=0;
	
	for(i=0; i<x; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<x; i++)
	{
		sum= sum + a[i];
	}
	
	array(sum);
}