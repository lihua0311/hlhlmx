#include<stdio.h>
void main()
{
    int a,c;
    int b[3][4]={{12,13,14,15},
        {14,15,16,17}};
    printf("欢迎使用此程序！\n");
        for(a=0;a<=1;a++)
        {
            for(c=0;c<=3;c++)
            {
                printf("%d ",b[a][c]);

            }
            printf("\n");
        }
}
