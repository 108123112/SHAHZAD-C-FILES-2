#include<stdio.h>
int main()
{
	int a,b,sum,diff,prod,quotient,rem;
	printf("Enter value of a\t");
	scanf("%d",&a);
	printf("Enter value of b\t");
	scanf("%d",&b);
	sum=a+b;
	diff=a-b;
	prod=a*b;
	quotient=a/b;
	rem=a%b;
	printf("Sum=%d\nDifference=%d\nProduct=%d\nQuotient=%d\nRemainder=%d",sum,diff,prod,quotient,rem);	
	return 0;
}
