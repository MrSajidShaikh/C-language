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
	
	printf("enter any no:=");
	scanf("%d",&d);
	
	if(a>b)
	{	if(a>c)
		{	if(a>d)
			{	printf("%d is maximum number",a);
			}
			else
			{	printf("%d is maximum",d);
			}
		}		
			else
			{	if(c>d)
			{	printf("%d is maximum number.",c);
			}
			else
			{	printf("%d is maximum number.",d);
			}
			}
	}
	else
	{	if(b>c)
		{	if(b>d)
			{	printf("%d is maximum number.",b);
			}
			else
			{	printf("%d is maximum number.",d);
			}
		}
		else
		{	if(c>d)
			{	printf("%d is maximum number.",c);
			}
			else
			{	printf("%d is maximum number.",d);
			}
		}
	}
}