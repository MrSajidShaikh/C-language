#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	
	printf("Enter your name := ");
	gets(a);
	
	int i;
	
	if(a[0]>=97 && a[0]<=122)
	{
		a[i] = a[i]-32;
	}
	
	for(i=1;a[i];i++)
	{
		if(a[i]>=67 && a[i]<=97)
		{
			a[i] = a[i]+32;
		}
	}
	 
	 puts(a);
	 
}