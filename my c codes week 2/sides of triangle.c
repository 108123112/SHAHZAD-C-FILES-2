#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter length of side 1");
	scanf("%d",&side1);
	printf("Enter length of side 2");
	scanf("%d",&side2);
	printf("Enter length of side 3");
	scanf("%d",&side3);
	if(side1==side2&&side2==side3)
	{
		printf("equilateral");
	}
	else if((side1==side2&&side2!=side3)|(side1==side3&&side2!=side3)|(side1!=side2&&side2==side3))
	{
		printf("isosceles");
	}
	else
	{
		printf("scalene");
	}
	return 0;
}
