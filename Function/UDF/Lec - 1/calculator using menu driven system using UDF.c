#include<stdio.h>
#include<conio.h>
int calc()
{
	char op;
	int a,b;
	
	printf("\nEnter an op(+,-,*,/) := ");
	scanf("%s",&op);
	
	printf("\nEnter the value := ");
	scanf("%d",&a);
	
	printf("Enter the value := ");
	scanf("%d",&b);
	
	switch(op)
	{
		case'+':
			printf("\n%d + %d = %d \n",a,b,a+b);
		break;
		
		case'-':
			printf("\n%d - %d = %d \n",a,b,a-b);
		break;
		
		case'*':
			printf("\n%d * %d = %d \n",a,b,a*b);
		break;
		
		case'/':
			printf("\n%d / %d = %d \n",a,b,a/b);
		break;
		
		default:
			printf("\nError! operator is not correct.\n");
		
	}
	
}

main()
{
	calc();
}






