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
} c[100]= {{'A',"suv","ww",50000,"С��"},
    {'B',"bmw","ee",60000,"С��"},
    {'C',"audi","rr",55000,"С��"},
    {'D',"honda","tt",90000,"С��"},
    {'E',"byd","hh",20000,"С��"}
};//��ʼ��ȫ�� �ṹ��
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
    printf("��ѡ����\n");
    while(scanf("%d",&a)!=EOF)
    {
        switch(a)//ʵ��ѡ����
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
                printf("�������������ѡ����!\n");
        }
    }
}

void zhujiemian()
{
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$                                               $\n");
printf("$              $\n"); printf("$                                               $\n");
printf("-------------------------------------------------------------------------\n");
printf("$      ������� :                                $\n"); printf("$         ����������ѧ ���2�� �����         $\n");
printf("$                                               $\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$    1�������                   2��������     \ n");
printf("$    3�޸�����                   4��ѯ����     \ n");
printf("$    5ɾ������                        6�˳�    \ n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
}
void shanchu()
{
    printf("����ɾ�����ͺţ�");
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
    printf("   �ͺ�      Ʒ��      ����       �۸�  ϵ��\n");//�������ֽڿո�һ�ֽڶ���
    for(j=0; j<i; j++)
    {
 printf("%10c%10s%10s%15d%10s\n",c[j].xinghao,c[j].pinpai,c[j].changjia,c[j].price,c[j].lianxiren);
    }
}
void add()
{
    printf("������������\n");
    look();
    printf("�����������ͺ�Ʒ�Ƴ��Ҽ۸���ϵ��");
    getchar();//  �Ե��س�
    scanf(" %c%s%s%d%s",&c[i].xinghao,c[i].pinpai,c[i].changjia,&c[i].price,c[i].lianxiren);
    i++;//���������ݷŻؽṹ��
}
void xiugai()
{
    look();
    printf("������Ҫ�޸ĳ���  ");
    printf("��Ϸ�����\n");
    int k;
    char b;
    getchar();//...........ͬ��
    scanf("%c",&b);
    if(b>='A'&&b<='z')//��ֹ���벻�Ϸ�
    {
        for(k=0; k<i; k++)
            if(b==c[k].xinghao)break;
        if(k==i)printf("�޴˳���");
        else
        {
            printf("���޸�����");
            getchar();//........
            scanf("%c%s%s%d%s",&c[k].xinghao,c[k].pinpai,c[k].changjia,&c[k].price,c[k].lianxiren);
        }
    }
    else
        printf("�������������ѡ����!");
}
void find()//���ͺŻ�Ʒ��
{
    void one(char n);
    void two(char h[]);
    printf("��ѡ����ҹ���\n");
    printf("1~���ͺ� 2~��Ʒ��");
    char m[200],onee[]="1",twoo[]="2";
    char n,h[20];
    scanf("%s",m);
    if(strcmp(m,onee)==0) one(n);
    else if(strcmp(m,twoo)==0)two(h);
    else printf("�������������ѡ����!\n");
}
void one(char n)
{
    int p;
    getchar();
    printf("�������ͺ�");
    scanf("%c",&n);
    for(p=0; p<i; p++)
        if(n==c[p].xinghao)
        {
            printf("%10c%10s%10s%15d%10s\n",c[p].xinghao,c[p].pinpai,c[p].changjia,c[p].price,c[p].lianxiren);
            break;
        }
    if(p==i)printf("�޴�����");
}
void two(char h[])
{
    int y;
    getchar();
    printf("����Ʒ��");
    scanf("%s",h);
    for(y=0; y<i; y++)
        if(strcmp(h,c[y].pinpai)==0)
        {
            printf("%10c%10s%10s%15d%10s\n",c[y].xinghao,c[y].pinpai,c[y].changjia,c[y].price,c[y].lianxiren);
            break;
        }
    if(y==i)printf("�޴�����");
}
void tuichu()
{
    printf("��лʹ�ñ�ϵͳ");
    return(0);
}


