#include<stdio.h>
#include<math.h>
int main()
{
	float p,si,ci,r,a;
	int t;
	printf("Enter principal amount:\t");
	scanf("%d",&p);
	printf("Enter rate:\t");
	scanf("%d",&r);
	printf("Enter no. of years:\t");
	scanf("%d",&t);
	si=(p*r*t)/100;
	a=(1+r/100);
	ci=pow(a,t);
	printf("The simple interest is:\t%d",si);
	printf("\nThe compound interest is:\t%d",ci);
	return 0;
}
