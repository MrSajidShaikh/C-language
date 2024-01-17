#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int i,x[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&x[i]);
	}
	int *ptr;
	
	for(i=0; i<n; i++)
	{
		ptr=&x[i];
		printf("\n%d",*ptr*x[i]);
		
	}
	
}