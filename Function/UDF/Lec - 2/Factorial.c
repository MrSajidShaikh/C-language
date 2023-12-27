#include<stdio.h>
#include<conio.h>
int factorial(int f)
{
	if(f==1)
	{
		return f;
	}
	return f * factorial(f-1);
}
void main()
{
	int f;
	printf("Enter the value := ");
	scanf("%d",&f);
	
	printf("%d",factorial(f));
}