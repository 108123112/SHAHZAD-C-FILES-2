#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter value of n\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nThe sum of first %d natural numbers is %d",n,sum);
	return 0;
}
