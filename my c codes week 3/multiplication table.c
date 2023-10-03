#include<stdio.h>
int main()
{
	int n,limit,i,product;
	printf("Enter value of n");
	scanf("%d",&n);
	printf("Enter value of limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		product=i*n;
		printf("%dx%d=%d\n",i,n,product);
	}
	return 0;
}
