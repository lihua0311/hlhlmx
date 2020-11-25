#include<stdio.h>
#include<Windows.h>
void main()
{
  int a=1;
  printf("秒表计数器\n");
  do
  {
      printf("现在是第%d秒\n",a);
    a++;
    Sleep(1000);
  }
  while(a<=100000000000000000000000000000000000000000000000000000000);
  {
      printf("年轻人，醒醒，该起床打工了！");
  }
  system("pause");
}
