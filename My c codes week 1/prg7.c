#include<stdio.h>
int main()
{
	float num1,num2,prod1;
	int prod2;
	printf("Enter num1:\t");
	scanf("%d",&num1);
	printf("\nEnter num2:\t");
	scanf("%d",&num2);
	prod1=num1*num2;
	prod2=num1*num2;
	printf("\nThe floating point product is:\t%d",prod1);
	printf("\nThe integer product is:\t%d",prod2);
	return 0;
}
