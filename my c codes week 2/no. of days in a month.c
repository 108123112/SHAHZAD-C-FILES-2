#include<stdio.h>
int main()
{
    int y,m,d;
    printf("Enter year");
    scanf("%d",&y);
    printf("Enter month");
    scanf("%d",&m);
    if(m==2)
    {
        (y%4==0&&(y%400==0||y%100!=0))?(d=29):(d=28);

    }
    else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        d=31;

    }
    else if(m==4||m==6||m==9||m==11)
    {
        d=30;

    }
    else
    {
        printf("Not possible");
    }
printf("%d",d);
    return 0;
}
