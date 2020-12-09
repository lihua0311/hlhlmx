#include<stdio.h>
#include<string.h>
void main()
{
    char a[]="请问今天是什么节？";
    printf("%s\n",a);
    scanf("%s",&a);
    if(!strcmp(a,"春节"))
    {
        printf("给我安排饺子\n");
    }
    else if(!strcmp(a,"端午"))
    {
        printf("给我安排粽子\n");
    }
    else if(!strcmp(a,"元宵节"))
    {
    printf("给我安排元宵\n");
    }
    else if(!strcmp(a,"中秋节"))
    {
        printf("给我安排月饼\n");
    }
    else
        {
            printf("亲，这边建议你重新输入一个节日\n");
        }
        system("pause");
}
