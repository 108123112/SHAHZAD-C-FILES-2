#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter date");
    scanf("%d",&d);
    printf("Enter month");
    scanf("%d",&m);
    printf("Enter year");
    scanf("%d",&y);
    if(y%4==0&&y%100!=0||y%400==0)
    {
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12&&d<31)
        {
            d++;
        }
        else if(m==1||m==3||m==5||m==7||m==8||m==10&&d==31)
        {
            m++;
        }
        else if(m==2&&d<29)
        {
            d++;
        }
        else if(m==2&&d==29)
        {
            m++;
            d=1;
        }
        else if(m==4||m==6||m==9||m==11&&d<30)
        {
            d++;
        }
        else if(m==4||m==6||m==9||m==11&&d==30)
        {
            m++;
        }
        else if(m==12&&d==31)
        {
            y++;
            d=1;
            m=1;
        }
        else
        {
            printf("Not possible!");
        }
    }
    else
    {
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12&&d<31)
        {
            d++;
        }
        else if(m==1||m==3||m==5||m==7||m==8||m==10&&d==31)
        {
            m++;
        }
        else if(m==2&&d<28)
        {
            d++;
        }
        else if(m==2&&d==28)
        {
            m++;
            d=1;
        }
        else if(m==4||m==6||m==9||m==11&&d<30)
        {
            d++;
        }
        else if(m==4||m==6||m==9||m==11&&d==30)
        {
            m++;
        }
        else if(m==12&&d==31)
        {
            y++;
            d=1;
            m=1;
        }
        else
        {
            printf("Not possible!");
        }
    }

    printf("The date tomorrow is: %d/%d/%d",d,m,y);
    return 0;
}
