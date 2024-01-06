#include<stdio.h>
#include<conio.h>

int waiter()
{
	int wait = 20;
	
	return wait;
}
int waiter2()
{
	int wait2 = 20;
	
	return wait2;
}
int mantri()
{
	int mant = 20;
	
	return mant;
}
int dealer(int mantri,int waiter,int waiter2)
{
	int dealer = 20 + mantri + waiter2 + waiter ;
	
	return dealer;
}
int rocky()
{
	int rocky = 20 + dealer(mantri(),waiter(),waiter2());
	
	return rocky;
}


main()
{
	printf("%d",rocky());
}