#include<stdio.h>
int main()
{
	int num,count,a,b,c;
	printf("Enter number");
	scanf("%d",&num);
	a=num%10;
	b=(num/10)%10;
	c=(num/100)%10;
	num=a*100+b*10+c;
	printf("%d",num);
	return 0;
}
