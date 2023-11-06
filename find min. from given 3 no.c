#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	
	printf("enter any no:=");
	scanf("%d",&a);
	
	printf("enter any no:=");
	scanf("%d",&b);

	printf("enter any no:=");
	scanf("%d",&c);
	
	if(a<b)
	{	if(a<c)
		{	printf("%d is minimum number.",a);
		}		
			else
			{	if(b<a)
			{	printf("%d is minimum number.",b);
			}
			else
			{	printf("%d is maximum number.",c);
			}
			}
		
	}
	
}