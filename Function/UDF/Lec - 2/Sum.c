#include<stdio.h>
#include<conio.h>
int sum(int f)
{
	if(f==1)
	{
		return f;
	}
	return f + sum(f-1);
}
void main()
{
	int f;
	printf("Enter the value := ");
	scanf("%d",&f);
	
	printf("%d",sum(f));
}