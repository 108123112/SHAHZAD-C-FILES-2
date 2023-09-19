#include<stdio.h>
int main()
{
	int p,c,b,m,cs,percentage;	
	printf("Enter physics marks");
	scanf("%d",&p);
	printf("Enter chemistry marks");
	scanf("%d",&c);
	printf("Enter biology marks");
	scanf("%d",&b);
	printf("Enter mathematics marks");
	scanf("%d",&m);
	printf("Enter computer marks");
	scanf("%d",&cs);
	
	percentage=(p+c+b+m+cs)/5;
	
	if(percentage>=90)
	{
	    printf("Grade A");	
	}
	else if(90>percentage&&percentage>=80)
	{
		printf("Grade B");
	}
	else if(80>percentage&&percentage>=70)
	{
		printf("Grade C");
	}
	else if(70>percentage&&percentage>=60)
	{
		printf("Grade D");
	}
	else if(60>percentage&&percentage>=40)
	{
		printf("Grade E");
	}
	else 
	{
		printf("Grade F");
	}
	return 0;
	}
