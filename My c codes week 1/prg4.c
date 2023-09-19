#include<stdio.h>
int main()
{
	int math,phy,chem,eng,geo,percentage;
	printf("Enter Mathematics marks:\t");
	scanf("%d",&math);
	printf("\nEnter Physics marks:\t");
	scanf("%d",&phy);
	printf("\nEnter Chemistry marks:\t");
	scanf("%d",&chem);
	printf("\nEnter English marks:\t");
	scanf("%d",&eng);
	printf("\nEnter Geography marks:\t");
	scanf("%d",&geo);
	percentage=(math+phy+chem+eng+geo)/5;
	printf("The percentage is:%d",percentage);
	return 0;
}
