#include<stdio.h>
#include<conio.h>
main()
{
	int physics,chemistry,biology,maths,computer;
	
	float per;
	
	printf("enter physics marks:=");
	scanf("%d",&physics);
	
	printf("enter chemistry marks:=");
	scanf("%d",&chemistry);
	
	printf("enter biology marks:=");
	scanf("%d",&biology);
	
	printf("enter maths marks:=");
	scanf("%d",&maths);
	
	printf("enter computer marks:=");
	scanf("%d",&computer);
	
	per = (physics+chemistry+biology+maths+computer) / 5 ;
	
	
	printf("percentage = %.2f"  ,per);
	if(per>=90)
	{
		printf("  Grade A");
	}
	else if(per>=80)
	{
		printf("  Grade B");
	}
	else if(per>=70)
	{
		printf("  Grade C");
	}
	else if(per>=60)
	{
		printf("  Grade D");
	}
	else if(per>=50)
	{
		printf("  Grade E");
	}
	else
	{
		printf("  Grade F");
	}
}