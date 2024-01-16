#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
	int id,age,exp_yr;
	char name[50],role[30],company_name[50],city[25];	
};

main()
{
	int n;
	int id,age,exp_yr;
	char name[50],role[30],company_name[50],city[25];	
	
	
	
	struct employee emp[n];
	int i;
	
	printf("Enter no. of Employee : ");
	scanf("%d",&n);
	
	
	for(i=1; i<=n; i++)
	{
		printf("Enter id : ");
		scanf("%d",&emp[i].id);
		printf("Enter name : ");
		scanf("%s",&name);
		strcpy(emp[i].name,name);
		printf("Enter age : ");
		scanf("%d",&emp[i].age);
		printf("Enter Role : ");
		scanf("%s",&role);
		strcpy(emp[i].role,role);
		printf("Enter city : ");
		scanf("%s",&city);
		strcpy(emp[i].city,city);
		printf("Enter Exp_year : ");
		scanf("%d",&emp[i].exp_yr);
		printf("Enter Company name : ");
		scanf("%s",&company_name);
		strcpy(emp[i].company_name,company_name);
	
		printf("\n");
		
	}
	
	for(i=1; i<=n; i++)
	{
		printf("Enter id : %d\n",emp[i].id);
		printf("Enter name : %s\n",emp[i].name);
		printf("Enter age : %d\n",emp[i].age);
		printf("Enter Role : %s\n",emp[i].role);
		printf("Enter city : %s\n",emp[i].city);
		printf("Enter Exp_year : %d\n",emp[i].exp_yr);
		printf("Enter Company name : %s",emp[i].company_name);
		
		
		printf("\n\n");
	}
}