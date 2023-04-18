#include<stdio.h>
main()
{
	int unit;
	float r,s;
	printf("enter the value of unit->");
	scanf("%d",&unit);
	if(unit<=50)
	{
		r=(unit*50);
	}
	else if(unit<=150)
	{
		r=(unit-50)*0.75+25;
	}
	else if(unit<=250)
	{
		r=(unit-150)*1.20+100;
	}
	else 
	{
		r=(unit-250)*1.50+220;
	}
	s=r*0.2;
	printf("the total bill=%.2f",s);
}
