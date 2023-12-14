#include<stdio.h>
#include<string.h>
main()
{
	char a[5]="naman";

	int i,j,check;
	
	for(i=0;i<5;i++)
	{
		for(j=5;j>0;j--)
		{
			if(a[i]!=a[j])
			{
				check=1;
			}
		}
	}
	if(check==1)
	{
		printf("string is not palindrom.");
	}
	else
	{
		printf("string is palindrom.");
	}
	
	
}