#include<stdio.h>
int a(int b)
{
    if(b<=0)
    {
        return 0;
    }
    return b*a(b-1);

}
void main()
{

    int c;
    scanf("%d",&c);
    printf("%d",a(c));
    }
