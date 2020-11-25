#include<stdio.h>
void main()
{
    int a;
    printf("请输入你的工资：");
    scanf("%d",&a);
    if(a>=0&&a<=100)
    {
        printf("贫困打工人");
    }
    else if(a>=101&&a<=1000)
    {
        printf("一般打工人");
    }
    else if(a>1001&&a<=20000)
    {
        printf("土豪打工人");
    }
    else
    {
        printf("输入错误，请重新输入！");
    }
}
