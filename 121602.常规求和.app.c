#include<stdio.h>
void main()
{
    int a,b=0;
    scanf("%d",&a);
    do
    {
        b=a+b;
        a--;


    }
    while(a>=0);
    printf("%d",b);

}
