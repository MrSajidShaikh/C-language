#include<stdio.h>
#include<conio.h>
main()
{
	int N,x=1;
	
	printf("Enter any number:=");
	scanf("%d",&N);
	
	while(N>=x)
	{
		printf("%d  ",N);
		N--;
	}
}