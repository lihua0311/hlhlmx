#include<stdio.h>
void main()
{
    int a,b,c,t;
    printf("降序排序\n请输入三个数字：\n");
    scanf("%d，%d%，d",&a,&b,&c);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;

    }
    if(a<c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b<c)
    {
        t=b;
        b=c;
        c=t;
    }
    printf("%d\n%d\n%d\n",a,b,c);
}
