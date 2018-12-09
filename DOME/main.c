#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct car
{
    char xinghao;
    char pinpai[20];
    char changjia[20];
    int price;
    char lianxiren[20];
} c[100]= {{'A',"suv","ww",50000,"小王"},
    {'B',"bmw","ee",60000,"小李"},
    {'C',"audi","rr",55000,"小张"},
    {'D',"honda","tt",90000,"小刘"},
    {'E',"byd","hh",20000,"小杨"}
};//初始化全局 结构体
int i=5;
int main()
{
    system("color F1");
    int a;
    void zhujiemian();
    void look();
    void add();
    void xiugai();
    void find();
    void tuichu();
    zhujiemian();
    printf("请选择功能\n");
    while(scanf("%d",&a)!=EOF)
    {
        switch(a)//实现选择功能
        {
            case 1:
                look();
                break;
            case 2:
                add();
                break;
            case 3:
                xiugai();
                break;
            case 4:
                find();
                break;
            case 6:
                tuichu();
                return(0);
            case 5:
                shanchu();
                break;
            default:
                printf("输入错误，请重新选择功能!\n");
        }
    }
}

void zhujiemian()
{
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$                                               $\n");
printf("$              $\n"); printf("$                                               $\n");
printf("-------------------------------------------------------------------------\n");
printf("$      设计制作 :                                $\n"); printf("$         哈尔滨理工大学 软件2班 侯继鑫         $\n");
printf("$                                               $\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$    1浏览数据                   2增加数据     \ n");
printf("$    3修改数据                   4查询数据     \ n");
printf("$    5删除数据                        6退出    \ n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
}
void shanchu()
{
    printf("输入删除的型号：");
    char o;
    getchar();
    scanf("%c",&o);
    int j;
    for(j=0; j<i; j++)
    {
        if(o==c[j].xinghao)
        {
            for(; j<i-1; j++)
            {
                c[j]=c[j+1];
            }
            i--;
            break;
        }
    }
}
void look()
{
    int j;
    printf("   型号      品牌      厂家       价格  系人\n");//汉字两字节空格一字节对齐
    for(j=0; j<i; j++)
    {
 printf("%10c%10s%10s%15d%10s\n",c[j].xinghao,c[j].pinpai,c[j].changjia,c[j].price,c[j].lianxiren);
    }
}
void add()
{
    printf("请输入新数据\n");
    look();
    printf("请依次输入型号品牌厂家价格联系人");
    getchar();//  吃掉回车
    scanf(" %c%s%s%d%s",&c[i].xinghao,c[i].pinpai,c[i].changjia,&c[i].price,c[i].lianxiren);
    i++;//输入新数据放回结构体
}
void xiugai()
{
    look();
    printf("请输入要修改车型  ");
    printf("请合法输入\n");
    int k;
    char b;
    getchar();//...........同上
    scanf("%c",&b);
    if(b>='A'&&b<='z')//防止输入不合法
    {
        for(k=0; k<i; k++)
            if(b==c[k].xinghao)break;
        if(k==i)printf("无此车型");
        else
        {
            printf("请修改数据");
            getchar();//........
            scanf("%c%s%s%d%s",&c[k].xinghao,c[k].pinpai,c[k].changjia,&c[k].price,c[k].lianxiren);
        }
    }
    else
        printf("输入错误，请重新选择功能!");
}
void find()//按型号或品牌
{
    void one(char n);
    void two(char h[]);
    printf("请选择查找功能\n");
    printf("1~按型号 2~按品牌");
    char m[200],onee[]="1",twoo[]="2";
    char n,h[20];
    scanf("%s",m);
    if(strcmp(m,onee)==0) one(n);
    else if(strcmp(m,twoo)==0)two(h);
    else printf("输入错误！请重新选择功能!\n");
}
void one(char n)
{
    int p;
    getchar();
    printf("请输入型号");
    scanf("%c",&n);
    for(p=0; p<i; p++)
        if(n==c[p].xinghao)
        {
            printf("%10c%10s%10s%15d%10s\n",c[p].xinghao,c[p].pinpai,c[p].changjia,c[p].price,c[p].lianxiren);
            break;
        }
    if(p==i)printf("无此数据");
}
void two(char h[])
{
    int y;
    getchar();
    printf("请输品牌");
    scanf("%s",h);
    for(y=0; y<i; y++)
        if(strcmp(h,c[y].pinpai)==0)
        {
            printf("%10c%10s%10s%15d%10s\n",c[y].xinghao,c[y].pinpai,c[y].changjia,c[y].price,c[y].lianxiren);
            break;
        }
    if(y==i)printf("无此数据");
}
void tuichu()
{
    printf("感谢使用本系统");
    return(0);
}


