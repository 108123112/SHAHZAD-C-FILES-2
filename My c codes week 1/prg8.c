#include<stdio.h>
#include<math.h>
int main()
{
	float km,m,cm,mm;
	printf("Enter measurement in km:\t");
	scanf("%d",&km);
	m=km/1000;
	cm=km/100000;
	mm=km/1000000;
	printf("%d\tmetres\n%d\tcentimetres\n%d\tmillimetres",m,cm,mm);
	return 0;
}
