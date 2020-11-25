#include<stdio.h>
void main()
{
    int a;
    printf("请输入全球的大学排名：");
    scanf("%d",&a);
    if(a==1)
    {
        printf("麻省理工大学");
    }
    else if(a==2)
    {
        printf("斯坦福大学");
    }
    else if(a==3)
    {
        printf("哈佛大学");
    }
    else if(a==4)
    {
        printf("牛津大学");
    }
    else if(a==5)
    {
        printf("加州理工大学");
    }
    else if(a==6)
    {
        printf("苏黎世联邦理工大学");
    }
    else if(a==7)
    {
        printf("剑桥大学");
    }
    else if(a==8)
    {
        printf("伦敦大学学院");
    }
    else if(a==9)
    {
        printf("帝国理工学院");
    }
    else if(a==10)
    {
        printf("芝加哥大学");
    }
    else if(a==11)
    {
        printf("广西科技师范学院");
    }

    else
    {
        printf("老铁，你的大学太捞了");
    }
}
