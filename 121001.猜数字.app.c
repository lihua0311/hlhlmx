#include<stdio.h>
#include<string.h>
void main()
{
    int a=6;
    int b;
    char c[]="想玩游戏吗，先回答下一句是什么，天王盖地虎";
    printf("%s\n",c);
    scanf("%s",&c);
    if(!strcmp(c,"宝塔镇河妖")){
        printf("验证成功，你是傻逼\n");
    while(1)
    {
        scanf("%d",&b);
        if(b==6)
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
    }
    else
    {
        printf("请输入正确的答案！");
    }

system("pause");

}

