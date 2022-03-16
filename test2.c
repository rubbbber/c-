#include "test.h"
void menu()
{
    printf("*************************\n");
    printf("***1.add     2.del   ****\n");
    printf("***3.show    4.sreach****\n");
    printf("***5.modify  6.sort  ****\n");
    printf("******  0.exit  *********\n");
    printf("*************************\n");
    printf("请输入您想要的功能:>");
}
void menu2()
{
    printf("***********************\n");
    printf("*******1.名字排序******\n");
    printf("*******2.年龄排序******\n");
    printf("***********************\n");
    printf("请输入您想要的功能:>");
}
void initCon(C*p)
{
    p->Date = (Peo*)malloc(2*sizeof(Peo));
    p->capacity = 2;
    p->size = 0;
}
void addinfo(C*p)
{
    if(p->size == p->capacity)
    {
        Peo*ps = (Peo*)realloc(p->Date,(p->capacity+1)*sizeof(Peo));
        if(ps != NULL)
        {
            p->Date = ps;
        }
        p->capacity++;
    }
    printf("请输入姓名:>");
    scanf("%s",p->Date[p->size].name);
    printf("请输入电话:>");
    scanf("%s",p->Date[p->size].tele);
    printf("请输入年龄:>");
    scanf("%d",&p->Date[p->size].age);
    printf("请输入地址:>");
    scanf("%s",p->Date[p->size].address);
    printf("请输入身份证号:>");
    scanf("%s",p->Date[p->size].id);
    p->size++;
}
void showinfo(C*p)
{
    int i = 0;
    printf("%-s\t%-15s\t%-2s\t%-10s\t%-15s\t\n","姓名","电话","年龄","地址","身份证号");
    for(i=0;i<p->size;i++)
    {
        printf("%-s\t%-15s\t%-2d\t%-10s\t%-15s\t\n",
        p->Date[i].name,
        p->Date[i].tele,
        p->Date[i].age,
        p->Date[i].address,
        p->Date[i].id);
    }
}
int findinfo(C*p)
{
    char arr[10];
    int i = 0;
    scanf("%s",arr);
    for(i=0;i<p->size;i++)
    {
        if(0 == strcmp(arr,p->Date[i].name))
        {
            return i;
        }
    }
    return -1;
}
int supersreach(C*p,int i,char a[])
{
    if(0 == strcmp(a,p->Date[i].name)||
    (a[0] == p->Date[i].age&&a[1] == '\0')||
    (((a[0]-'0')*10+(a[1]-'0')) == p->Date[i].age&&a[2] == '\0')||
    (((a[0]-'0')*100+(a[1]-'0')*10+(a[0]-'0')) == p->Date[i].age&&a[3] == '\0')||
    0 == strcmp(a,p->Date[i].tele)||
    0 == strcmp(a,p->Date[i].id)||
    0 == strcmp(a,p->Date[i].address))
    {
        return i;
    } 
    return -1;
}
void delinfo(C*p)
{
    int i;
    printf("请输入想要删除的名字:>");
    i = findinfo(p);
    if(i == -1)
    {
        printf("输入错误请重新输入\n");
    }
    else
    {
        for(i=i;i<p->size-1;i++)
        {
            p->Date[i] = p->Date[i+1];
        }
        p->size-=1;
        printf("删除成功\n");
    }
}
void sreachinfo(C*p)
{
    int i,b;
    int flag = 0;
    char a[20];
    printf("请输入想要找的信息:>");
    scanf("%s",a);
    for(i=0;i<p->size;i++)
    {
        b = supersreach(p,i,a);
        if(b != -1)
        {
            if(flag == 0)
            {
                printf("%-s\t%-15s\t%-2s\t%-10s\t%-15s\t\n",
                "姓名","电话","年龄","地址","身份证号");
            }
            flag = 1;
            printf("%-s\t%-15s\t%-2d\t%-10s\t%-15s\t\n",
                p->Date[b].name,
                p->Date[b].tele,
                p->Date[b].age,
                p->Date[b].address,
                p->Date[b].id);
        }
        if(flag == 0 && i == p->size-1)
        {
            printf("没有找到\n");
        }
    }
}
void modinfo(C*p)
{
    int i;
    printf("请输入想要更改成员的名字:>");
    i = findinfo(p);
    if(i==-1)
    {
        printf("没有找到\n");
    }
    else
    {
        printf("请输入姓名:>");
        scanf("%s",p->Date[i].name);
        printf("请输入电话:>");
        scanf("%s",p->Date[i].tele);
        printf("请输入年龄:>");
        scanf("%d",&p->Date[i].age);
        printf("请输入地址:>");
        scanf("%s",p->Date[i].address);
        printf("请输入身份证号:>");
        scanf("%s",p->Date[i].id);
    }
}
void destoryContact(C*p)
{
    free(p->Date);
    p->Date = NULL;
}
int compare2(const void *s1,const void *s2)
{
    return strcmp(((Peo*)s1)->name,((Peo*)s2)->name);
}
int compare1(const void *s1,const void *s2)
{
    return ((Peo*)s1)->age - ((Peo*)s2)->age;
}
void sortinfo(C*p)
{
    int a;
    menu2();
    scanf("%d",&a);
    if(a==1)
    {
        qsort(p->Date,p->size,sizeof(p->Date[0]),compare1);
        printf("排序成功\n");
    }
    else if(a==2)
    {
        qsort(p->Date,p->size,sizeof(p->Date[0]),compare2);
        printf("排序成功\n");
    }
    else
    {
        printf("已退出排序\n");
    }
}