//#include<stdio.h>
#include "test.h"
void menu()
{
    printf("*************************\n");
    printf("***1.add        2.del****\n");
    printf("***3.show      4.sort****\n");
    printf("***modify      0.exit****\n");
    printf("*************************\n");
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
        Peo*ps = (Peo*)realloc(p->Date,1*sizeof(Peo));
        if(ps != NULL)
        {
            ps = p->Date;
        }
        p->capacity += 1;
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
}