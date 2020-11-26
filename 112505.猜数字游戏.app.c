#include<stdio.h>

void main()
{
    int a=66;
    int b;
    printf("小猪猪，让我们一起来玩猜数字游戏吧！请小猪猪输入一个0-100的数字：\n");
    while(1)
    {
        scanf("%d",&b);
        if(b==66)
        {
            printf("恭喜你！小猪猪你猜对了嘿嘿！\n");
        }
        else if(b>a)
        {
            printf("小猪猪，你猜的数字太大了哦！再往小一点去猜呢！\n");
        }
        else
        {
            printf("小猪猪，你猜的数字太小了哦！再往大一点去猜呢！\n");
        }
    }

system("pause");

}
