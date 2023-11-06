#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	
	printf("enter any no:=");
	scanf("%d",&a);
	
	printf("enter any no:=");
	scanf("%d",&b);

	printf("enter any no:=");
	scanf("%d",&c);
	
	printf("enter any no:=");
	scanf("%d",&d);
	
	printf("enter any no:=");
	scanf("%d",&e);
	
	if(a<b)
	{	if(a<c)
		{	if(a<d)
			{	if(a<e)
				printf("%d is minimum number.",a);
			}
				else
			{	printf("%d is minimum number.",e);
			}
		}		
			else
			{	if(d<e)
				{	printf("%d is minimum number.",d);	
				}
			else
			{	printf("%d is minimum number.",e);
			}
			}
	}
	else
	{	if(b<c)
		{	if(b<d)
			{	if(b<e)
			{	printf("%d is minimum number.",b);
			}
			}
			else
			{	printf("%d is minimum number.",e);
			}
		}
		else
		{	if(c<d)
			{	if(c<e)
			{	printf("%d is minimum number.",c);
			}
			}
			else
			{	printf("%d is minimum number.",e);
			}
		}
	}
}