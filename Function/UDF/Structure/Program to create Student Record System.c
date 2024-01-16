#include<stdio.h>
#include<conio.h>
struct Student
{
	int id,age,standard;
	char name[50],course[30],school[50],city[25];	
};
main()
{
	int i;
	char name[50],course[30],school[50],city[25];
	struct Student stu[3];
	
	
	for(i=1; i<=3; i++)
	{
		printf("Enter name : ");
		scanf("%s",&name);
		strcpy(stu[i].name,name);
		
		printf("Enter id : ");
		scanf("%d",&stu[i].id);
	
		printf("Enter age : ");
		scanf("%d",&stu[i].age);
		
		printf("Enter Course : ");
		scanf("%s",&course);
		strcpy(stu[i].course,course);
		
		printf("Enter city : ");
		scanf("%s",&city);
		strcpy(stu[i].city,city);
		
		printf("Enter Standard : ");
		scanf("%d",&stu[i].standard);
		
		printf("Enter School name : ");
		scanf("%s",&school);
		strcpy(stu[i].school,school);
	
		printf("\n");
		
		
	}
	for(i=1; i<=3; i++)
	{
		printf("  name : %s\n",stu[i].name);
		printf("   id  : %s\n",stu[i].id);
		printf("course : %s\n",stu[i].course);
		printf(" City  : %s\n",stu[i].city);
		printf("  age  : %d\n",stu[i].age);
		printf("  std  : %d\n",stu[i].standard);
		printf("school : %s\n",stu[i].school);
		
		printf("\n");
		printf("\n");
	}
}

//#include<stdio.h>
//#include<string.h>
//struct student
//{
//	int id,age,standard;
//	char name[50],course[50],city[20],school[30];
//};
//
//
//main()
//{
//	struct student stu[3];
//	char name[50],course[50],city[20],school[30];
//	int i;
//	
//	for(i=1; i<=1; i++)
//	{
//		printf("Enetr name : ");
//		scanf("%s",&stu[i].name);
//		strcpy(stu[i].name,name);
//		
//		printf("Enter id : ");
//		scanf("%d",&stu[i].id);
//		
//		printf("Enter age : ");
//		scanf("%d",&stu[i].age);
//		
//		printf("Enter course : ");
//		scanf("%s",&stu[i].course);
//		strcpy(stu[i].course,course);
//		
//		printf("Enetr city : ");
//		scanf("%s",stu[i].city);
//		strcpy(stu[i].city,city);
//		
//		printf("Enter standard : ");
//		scanf("%d",&stu[i].standard);
//		
//		printf("Enter school : ");
//		scanf("%s",&stu[i].school);
//		strcpy(stu[i].school,school);
//		
//		printf("\n");
//	}
//	
//		for(i=1;i<=1;i++)
//		{
//			printf("Enetr   name   : %s\n",stu[i].name);
//			printf("Enetr   id     : %d\n",stu[i].id);
//			printf("Enetr   age    : %d\n",stu[i].age);
//			printf("Enetr  course  : %s\n",stu[i].course);
//			printf("Enetr   city   : %s\n",stu[i].city);
//			printf("Enetr standard : %d\n",stu[i].standard);
//			printf("Enetr  school  : %s\n",stu[i].school);
//		
//			printf("\n");
//			printf("\n");
//		}
//		
//}