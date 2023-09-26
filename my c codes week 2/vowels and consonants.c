#include<stdio.h>
int main()
{
    char c;
    printf("Enter alphabet");
    scanf("%d",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
    {
        printf("The entered alphabet is a vowel");
    }
    else
    {
        printf("The entered alphabet is a consonant");
    }

    return 0;
}
