#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a");
	scanf("%d",&a);
	printf("Enter b");
	scanf("%d",&b);
	printf("Enter c");
	scanf("%d",&c);
	a>b?(a>c?printf("%d is greatest",a):printf("%d is greatest",c)):(b>c?printf("%d is greatest",b):printf("%d is greatest",c));
	return 0;
}
