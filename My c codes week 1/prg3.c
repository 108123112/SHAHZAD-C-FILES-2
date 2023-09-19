#include<stdio.h>
int main()
{
	float radius,area,pi=3.141516;
	printf("Enter radius\t");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("The area of circle is:\t%d",area);
	return 0;
}
