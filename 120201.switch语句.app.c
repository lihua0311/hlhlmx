#include<stdio.h>
void main()
{
    int n;
    printf("                                欢迎使用此程序！\n");
    printf("请输入一个1-21数字得出全球前二十排名大学的名称：");
    scanf("%d",&n);

    switch(n)
    {
        case 1:printf("Harvard Univ USA 美国哈佛大学");break;
        case 2:printf("Stanford Univ USA 美国斯坦福大学");break;
        case 3:printf("Univ Cambridge UK 英国剑桥大学");break;
        case 4:printf("Univ California - Berkeley 美国加州大学伯克利分校");break;
        case 5:printf("Massachusetts Inst Tech (MIT) USA 美国麻省理工学院");break;
        case 6:printf("California Inst Tech USA 美国加州理工学院");break;
        case 7:printf("Princeton Univ USA 美国普林斯顿大学");break;
        case 8:printf("Univ Oxford UK 英国牛津大学");break;
        case 9:printf("Columbia Univ USA 美国哥伦比亚大学");break;
        case 10:printf(" Univ Chicago USA 美国芝加哥大学");break;
        case 11:printf(" Yale Univ USA 美国耶鲁大学");break;
        case 12:printf("Cornell Univ USA 美国康奈尔大学");break;
        case 13:printf("Univ California - San Diego USA 美国加州大学圣地亚哥分校");break;
        case 14:printf("Tokyo Univ Japan 日本东京大学");break;
        case 15:printf("Univ Pennsylvania USA 美国宾夕法尼亚大学");break;
        case 16:printf("Univ California - Los Angeles USA 美国加州大学洛杉矶分校");break;
        case 17:printf("Univ California - San Francisco USA 美国加州大学旧金山分校");break;
        case 18:printf("Univ Wisconsin - Madison USA 美国威斯康星大学");break;
        case 19:printf("Univ Michigan - Ann Arbor USA 美国密歇根大学");break;
        case 20:printf("Univ Washington - Seattle USA 美国华盛顿大学（西雅图）");break;
        case 21:printf("广西科技师范学院");break;
        default:printf("广科师牛逼！");break;

    }
}
