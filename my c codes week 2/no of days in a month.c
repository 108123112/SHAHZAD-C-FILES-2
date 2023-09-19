#include<stdio.h>
int main()
{
	int y,m;
	printf("Enter year");
	scanf("%d",&y);
	printf("Enter month");
	scanf("%d",&m);
	if(y%4==0&&(y%400==0||y%100!=0))
	{
		if(m==1||3||5||7||8||10||12)
		{
			printf("31 days");
		}
		else if(m==2)
		{
			printf("29 days");
		}
		else if(m==4||6||9||11)
		{
			printf("30 days");
		}
		else
		{
			printf("Not valid!");
		}
	}
	else
	{
		if(m==1||3||5||7||8||10||12)
		{
			printf("31 days");
		}
		else if(m==2)
		{
			printf("28 days");
		}
		else if(m==4||6||9||11)
		{
			printf("30 days");
		}
		else
		{
			printf("Not valid!");
		}
	}
	return 0;
}
