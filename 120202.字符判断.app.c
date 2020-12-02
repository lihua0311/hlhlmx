#include<stdio.h>
void main()
{
    char n;
    printf("                           欢迎使用此程序!\n");
    printf("请输入asdw其中一个字符：");
    scanf("%c",&n);
    switch(n)
  {
      case 'a':printf("你在点击左键！");
      case 's':printf("你在点击下键！");
      case 'd':printf("你在点击右键！");
      case 'w':printf("你在点击上键！");
      default:printf("输入错误，请重新输入！");

  }
 system("pasue");
}
