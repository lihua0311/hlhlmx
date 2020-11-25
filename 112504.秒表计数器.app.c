#include<stdio.h>
#include<Windows.h>
void main()
{
  int a=1;
  printf("秒表计时器\n");
  do
  {
      printf("%d\n",a);
    a++;
    Sleep(1000);
  }
  while(a<=100000000000000000000000000000000000000000000000000000000);
  {
      printf("年轻人，你活得太久了");
  }
  system("pause");
}
