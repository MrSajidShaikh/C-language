#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100];
	
	printf("Enter the string := ");
	gets(a);
	
	int length = strlen(a);
	int i,j,f=1;
	
	for(i=0;i<length;i++)
	{
		for(j=i+1;j<length;j++)
		{
			if(a[i]==a[j])
			{
				f++;
				a[j]=0;
			}
		}
		if(a[i]!=0)
		{
			printf("%c -> %d\n",a[i],f);
		}
		f=1;
	}
}
