#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	
	
	//user input
	
	printf("Enter any character:");
	scanf("%c",&ch);
	
	
	//checking alphabet
	
	if((ch>='A' && ch<='z') || (ch>='a' && ch<='z'))
	{
		printf("%c is alphabet.",ch);
	}
	
	//checking numbers
	else if(ch>='0' && ch<='9')
	{
		printf("%c is number.",ch);
	}
	
	//special characters
	else
	{
		printf("%c is special character.",ch);	
	}
	
}