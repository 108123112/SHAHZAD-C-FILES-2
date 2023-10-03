#include<stdio.h>
int main()
{
	int n,i=1,j=1,c;
	printf("Enter value of n");
	scanf("%d",&n);
	printf("1\n1\n");
	for(i;i<=n;)
	{	
		c=i;
		j=c+j;
		i=j;
		printf("%d\n",j);
	}
	return 0;	
}
