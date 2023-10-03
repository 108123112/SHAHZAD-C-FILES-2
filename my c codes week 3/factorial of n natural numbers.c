#include<stdio.h>
int main()
{
	int n,i,factorial=1;
	printf("Enter value of n\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("\nThe factorial of first %d natural numbers is %d",n,factorial);
	return 0;
}
