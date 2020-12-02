#include<stdio.h>
void main()
{
    int a,b,c,x;
    printf("请输入一个秒数：");
    scanf("%d",&x);
    if(x>=0&&x<=86399)
    {
        a=x/3600;
        b=x%3600/60;
        c=x%3600%60;
        printf("%d时%d分%d秒\n",a,b,c);
    }
    system("pause");
}
