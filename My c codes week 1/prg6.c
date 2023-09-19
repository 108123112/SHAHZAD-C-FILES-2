#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of a:\t");
	scanf("%d",&a);
	printf("\nEnter value of b:\t");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of a:\t%d",a);
	printf("\nThe value of b:\t%d",b);
	return 0;
}
