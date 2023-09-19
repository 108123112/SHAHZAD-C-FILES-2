#include<stdio.h>
int main()
{
	int b,da,hra,ta,c;
	printf("Enter basic salary");
	scanf("%d",&b);
	printf("Enter city no.");
	scanf("%d",&c);
	da=(4*b)/10;
	if(c==1)
	{
		hra=(16*b)/100;
	}
	else if(c==2)
	{
		hra=(24*b)/100;
	}
	else if(c==3)
	{
		hra=(8*b)/100;
	}
	else if(c==4)
	{
		hra=(30*b)/100;
	}
	else
	{
		printf("Not valid!");
	}
	ta=b+da+hra;
	printf("The total salary amount is %d",ta);
	return 0;
}
