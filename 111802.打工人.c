void main()
{
    int a;
    scanf("%d",&a);
    if(a<=-1)
    {
        printf("你还有花呗没还，无法使用该程序");
    }
    else if(a>=0&&a<=500)
    {
        printf("赤贫");
    }
    else if(a>=501&&a<=1500)
    {
        printf("贫困");
    }
    else if(a>=1501&&a<=3000)
    {
        printf("普通打工人");
    }
    else if(a>=3001&&a<=5000)
    {
        printf("普通清洁工");
    }
    else if(a>=5001&&a<=12000)
    {
        printf("水电工工资");
    }
    else if(a>=12001&&a<=50000)
    {
        printf("脑袋大脖子粗不是老板就是伙夫");
    }
    else if(a>=50001&&a<=200000000)
    {
        printf("程序员");
    }
    else{}
}
