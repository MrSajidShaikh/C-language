#include<stdio.h>
#include<conio.h>
main()
{
	char x[100];
	
	printf("Enter your full name := ");
	scanf("%s",&x);
	
	int i;
	for(i=0;x[i];i++);
	
		printf("Length of string is := %d",i);

}