#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a:\t");
	scanf("%d",&a);
	printf("\nEnter value of b:\t");
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	printf("a=%d",a);
	printf("\nb=%d",b);
	return 0;	
}
