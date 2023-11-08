#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	
	printf("Enter any number:=");
	scanf("%d",&a);
	
	printf("Enter any number:=");
	scanf("%d",&b);
	
	printf("Enter any number:=");
	scanf("%d",&c);
	
	printf("Enter any number:=");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d is maximum number.",a);
			}
			else
			{
				printf("%d is maximum number",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is maximum number.",c);
			}
			else
			{
				printf("%d is maximum number.",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d is maximum number.",b);
			}
			else
			{
				printf("%d is maximum number",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is maximum number",c);
			}
			else
			{
				printf("%d is maximum number",d);
			}
		}
	}
}