#include<stdio.h>
int main()
{
	int b1,b2,b3;
	printf("Enter points for bowling technique 1");
	scanf("%d",&b1);
	printf("Enter points for bowling technique 2");
	scanf("%d",&b2);
	printf("Enter points for bowling technique 3");
	scanf("%d",&b3);
	b1>b2?(b1>b3?printf("%d",b1):printf("%d",b3)):(b2>b3?printf("%d",b2):printf("%d",b3));
	return 0;
}
