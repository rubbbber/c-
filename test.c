//双链表(宏的创建)
#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
    struct NODE*bwd1;
    struct NODE*fwd2;
    int num3;
}Node;
#define BUILDDOUBLELINK(type,num,bwd,fwd,conum)\
({\
    size_t i;\
    type*head_link = NULL;\
    type*end_link;\
    for(i=0;i<num;i++)\
    {\
        type*new_link = (type*)malloc(sizeof(type));\
        printf("你想将序号为%ld的节点命名为:>",i+1);\
        scanf("%d",&new_link->conum);\
        if(head_link == NULL)\
        {\
            head_link = new_link;\
        }\
        else\
        {\
            end_link->bwd = new_link;\
            new_link->fwd = end_link;\
        }\
        if(i == a-1)\
        {\
            head_link->fwd = new_link;\
            new_link->bwd = head_link;\
        }\
        end_link = new_link;\
    }\
    (head_link);\
})\

int main()
{
    size_t a,i;
    Node*L;
    printf("你想创建的双链表个数为:>\n");
    scanf("%ld",&a);
    L = BUILDDOUBLELINK(Node,a,bwd1,fwd2,num3);
    for(i=0;i<a;i++)
    {
        L = L->fwd2;
        printf("%d ",L->num3);
    }
    return 0;
}
//单链表(宏的创建)
// #include<stdlib.h>
// #include<stdio.h>
// typedef struct NODE
// {
//     struct NODE*next1;
//     int num2;
// }Node;
// typedef struct MODE
// {
//     struct MODE*next;
//     int num;
// }Mode;
// #define BUILDSINGLELINK(type,X,next,num)\
// ({\
// size_t b,i;\
// type*head_link = NULL;\
// type*end_link;\
// for(i=0;i<X;i++)\
// {\
//     type*new_link = (type*)malloc(sizeof(type));\
//     new_link->next = NULL;\
//     printf("你想将此节点命名为:>");\
//     scanf("%d",&new_link->num);\
//     if(head_link == NULL)\
//     {\
//         head_link = new_link;\
//     }\
//     else\
//     {\
//         end_link->next = new_link;\
//     }\
//     end_link = new_link;\
// }\
// (head_link);\
// })\

// int main()
// {
//     size_t a;
//     Node*L;
//     Mode*M;
//     printf("你想要生成单链表的个数:>\n");
//     scanf("%ld",&a);
//     L = BUILDSINGLELINK(Node,a,next1,num2);
//     M = BUILDSINGLELINK(Mode,a,next,num);
//     while(L!=NULL)
//     {
//         printf("%d ",L->num2);
//         L=L->next1;
//     }
//     while(M!=NULL)
//     {
//         printf("%d ",M->num);
//         M=M->next;
//     }
//     free(L);
//     free(M);
//     return 0;
// }
// 双链表(函数法的创建)
// #include<stdlib.h>
// #include<stdio.h>
// typedef struct NODE
// {
//     struct NODE*fwd;
//     struct NODE*bwd;
//     int num;
// }Node;
// Node*buildDoubleLink(size_t a)
// {
//     size_t i;
//     Node*head_link = NULL;
//     Node*end_link;
//     for(i=0;i<a;i++)
//     {
//         Node*new_link = (Node*)malloc(sizeof(Node));
//         printf("你想将序号为%ld的节点命名为:>",i+1);
//         scanf("%d",&new_link->num);
//         new_link->fwd = NULL;
//         if(head_link==NULL)
//         {
//             head_link = new_link;
//         }
//         else
//         {
//             end_link->fwd = new_link;
//             new_link->bwd = end_link;
//         }
//         end_link = new_link;
//         if(i == a-1)
//         {
//             head_link->bwd = end_link;
//             end_link->fwd = head_link;
//         }
//     }
//     return head_link;
// }
// int main()
// {
//     size_t a,i;
//     Node*L;
//     printf("输入你想创建的双链表数:>");
//     scanf("%ld",&a);
//     L = buildDoubleLink(a);
//     for(i=0;i<a;i++)
//     {
//         L = L->bwd;
//         printf("%d ",L->num);
//         //L = L->fwd;
//     }
//     printf("%ld",sizeof(L));
//     free(L);
//     return 0;
// }
//单链表(函数法的创建)
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct NODE
// {
//     int num;
//     struct NODE *next;
// }Node;
// Node* buildSingleLink(int a)
// {
//     size_t i = 0;
//     Node*head_link = NULL;
//     Node*end_link;
//     for(i=0;i<a;i++)
//     {
//         Node*new_link = (Node*)malloc(sizeof(Node));
//         printf("输入%ld节点的名称为:>",i+1);
//         scanf("%d",&new_link->num);
//         new_link->next = NULL;
//         if(head_link == NULL)
//         {
//             head_link = new_link;
//         }
//         else
//         {
//             end_link->next = new_link;
//         }
//         end_link = new_link;
//     }
//     return head_link;
// }
// int main()
// {
//     size_t a;
//     printf("你想要生成单链表的个数:>\n");
//     scanf("%ld",&a);
//     Node* L = buildSingleLink(a);
//     while(L!=NULL)
//     {
//         printf("%d ",L->num);
//         L=L->next;
//     }
//     free(L);
// }
//二分法实现bsearch
//求一组数去掉多少个数成为等差数列(柔性数组版)
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct 
// {
//     int size;
//     int cap acity;
//     int*a;//接收数组
//     int arr[];//运算数组
// }S;
// int main()
// {
//     S*ps = (S*)malloc(sizeof(S)+3*sizeof(int));   

//     return 0;
// }
//qsort的再实现（插入排序）双指针
// #include<stdio.h>
// #include<string.h>
// typedef struct
// {
//     char name[20];
//     int age;
// }S;
// void print(S*p,int sz)
// {
//     int i;
//     for(i=0;i<sz;i++)
//     {
//         printf("%s,%d",p[i].name,p[i].age);
//     }
// }
// int compare(const void*s1,const void*s2)
// {
//     //return strcmp(((S*)s1)->name, ((S*)s2)->name);
//     return ((S*)s1)->age-((S*)s2)->age;
// }
// void Swap(char*s1,char*s2,int width)
// {
//     int i = 0;
//     char tmp;
//     for(i=0;i<width;i++)
//     {
//         tmp = s1[i];
//         s1[i] = s2[i];
//         s2[i] = tmp;
//     }
// }
// void superBubble(void*base,int num,int width,int(*comp)(const void*,const void*))//int(*)()才为函数指针不为int*()
// {
//     //char*p = (char*)base;//插入排序的实现
//     int i = 0,j=0;
//     for(i=1;i<=num-1;i++)
//     {
//         base+=width;
//         while(compare(base-width*(j+1),base-width*j)>0)//比较两个数大小
//         {
//             Swap(base-width*(j+1),base-width*j,width);
//             j++;
//             if(i<=j+1)
//             {
//                 break;
//             }
//         }
//         j = 0;
//     }
// }
// int main()
// {
//     S a[3] = {{"zhangshan",19},{"lisi",17},{"wangwu",18}};
//     int sz = sizeof(a)/sizeof(a[0]);
//     superBubble(a,sz,sizeof(a[0]),compare);//不能写成compare(s1,s2)
//     print(a,sz);
// }
//atoi的解释
// #include <stdio.h>      /* printf, fgets */
// #include <stdlib.h>     /* atoi */
// int main ()
// {
//   int i =0;
//   char buffer[256];
//   printf ("Enter a number: ");
//   fgets (buffer, 256, stdin);
//   i = atoi (buffer);
//   printf ("The value entered is %d. Its double is %d.\n",i,i*2);
//   return 0;
// }
// 酒酒花数
// #include<math.h>
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     long long d =pow(10,a-1);
//     long long f =pow(10,a);
//     long long i,count=0;
//     for(i=d-1;i<f;i++)
//     {
//         int g = i;
//         int c = i;
//         long long b = 0;
//         do
//         {
//             b+=(g%10);
//         } while (g/=10);
//         long long j = 0;
//         for(j=0;j<a;j++)
//         {
//             if(c == b)
//             {
//                 count++;
//             }
//             c/=10;
//         }
//     }
//     printf("%lld\n",count%1000000007);
// }
//求方程
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     long long n, m = 0, y = 1;
//     scanf("%lld", &n);
//     for (;y < sqrt(n);y++)
//     {
//         long long x = n - y * y;
//         if (x % 2 == 0)
//             m++;
//     }
//     printf("%lld\n", m);
//     return 0;
// }
//桃桃吃桃桃
// #include<stdio.h>
// #include<math.h>
// #include <stdlib.h>
// int compare(const void *s1,const void *s2)
// {
//     return *(int*)s1 - *(int*)s2;
// }
// int main()
// {
//     int a,i = 0;
//     int j = 0;
//     long long V,sum = 0,count = 0;
//     scanf("%d%lld",&a,&V);
//     int b = a;
//     int arr[1024];
//     while(b--)
//     {
//         scanf("%d",&arr[i]);
//         i++;
//     }
//     qsort(arr,a,sizeof(int),compare);
//     for(j=0;j<a;j++)
//     {
//         sum += arr[j];
//         if(sum<=V)
//         {
//             count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     printf("%lld\n",count);
// }
//求方程的解n=2*x-y*y
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     long long a,i,count = 0;
//     scanf("%lld",&a);
//     for(i=1;i<=(a/2);i++)
//     {
//         long long j;
//         for(j=1;j<=sqrt(a-2*i);j++)
//         {
//             if(a == 2*i + pow(j,2))
//             {
//                 count++;
//             }
//         }
//     }
//     printf("%lld\n",count);
//     return 0;
// }
// //秦九韶算法
// #include <stdio.h>
// int main()
// {
//     long long n, c, a, s = 0, d = 1, flag = 0;
//     scanf("%lld %lld", &n, &c);
//     c = c % 114514;
//     for (long long i = 0; i <= n; i++) 
//     {
//         if (flag == 0) 
//         {
//             flag = 1;
//         }
//         else
//         {
//             d *= c;
//         }
//         d %= 114514;
//         scanf("%lld", &a);
//         s += ((a * d) % 114514);
//         s %= 114514;
//     }
//     printf("%lld\n", s);
//     return 0;
// }
//通讯录的实现(中级版)
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<errno.h>
// void menu();
// void menu2();
// enum F
// {
//     Exit,
//     Add,
//     Del,
//     Show,
//     Sreach,
//     Modify,
//     Sort,
//     Save
// };
// typedef struct Peoinfo
// {
//     int num;
//     char name[10];
//     char tele[20];
//     int age;
//     char address[20];
//     char id[20];
// }Peo;
// typedef struct Contact
// {
//     Peo* Date;
//     int size;
//     int capacity;
// }C;
// void initCon();
// void addinfo();
// void showinfo();
// void delinfo();
// void sreachinfo();
// void destoryContact();
// void modinfo();
// void sortinfo();
// void saveinfo();
// int supersreach();
// int findinfo();

// #include "test.h"
// void menu()
// {
//     printf("*************************\n");
//     printf("***1.add     2.del   ****\n");
//     printf("***3.show    4.sreach****\n");
//     printf("***5.modify  6.sort  ****\n");
//     printf("***7.save    0.exit  ****\n");
//     printf("*************************\n");
//     printf("请输入您想要的功能:>");
// }
// void menu2()
// {
//     printf("***********************\n");
//     printf("*******1.默认排序******\n");
//     printf("*******2.名字排序******\n");
//     printf("*******3.年龄排序******\n");
//     printf("***********************\n");
//     printf("请输入您想要的功能:>");
// }
// void checkCapacity(C*p)
// {
//     if(p->size == p->capacity)
//     {
//         Peo*ps = (Peo*)realloc(p->Date,(p->capacity+1)*sizeof(Peo));
//         if(ps != NULL)
//         {
//             p->Date = ps;
//         }
//         p->capacity++;
//     }
// }
// void initCon(C*p)
// {
//     Peo tmp = {0};
//     p->Date = (Peo*)malloc(2*sizeof(Peo));
//     p->capacity = 2;
//     p->size = 0;
//     p->Date[0].num = 0;
//     FILE*pf = fopen("test.dat","rb");
//     if(pf == NULL)
//     {
//         perror("initCon");
//         return;
//     }
//     while(fread(&tmp,sizeof(Peo),1,pf))
//     {
//         checkCapacity(p);
//         p->Date[p->size] = tmp;
//         p->size++;
//         p->Date[p->size].num++;
//     }
//     fclose(pf);
//     pf = NULL;
// }
// void addinfo(C*p)
// {
//     checkCapacity(p);
//     printf("请输入姓名:>");
//     scanf("%s",p->Date[p->size].name);
//     printf("请输入电话:>");
//     scanf("%s",p->Date[p->size].tele);
//     printf("请输入年龄:>");
//     scanf("%d",&p->Date[p->size].age);
//     printf("请输入地址:>");
//     scanf("%s",p->Date[p->size].address);
//     printf("请输入身份证号:>");
//     scanf("%s",p->Date[p->size].id);
//     p->size++;
//     p->Date[p->size].num++;
// }
// void showinfo(C*p)
// {
//     int i = 0;
//     printf("%-s\t%-15s\t%-2s\t%-10s\t%-15s\t\n","姓名","电话","年龄","地址","身份证号");
//     for(i=0;i<p->size;i++)
//     {
//         printf("%-s\t%-15s\t%-2d\t%-10s\t%-15s\t\n",
//         p->Date[i].name,
//         p->Date[i].tele,
//         p->Date[i].age,
//         p->Date[i].address,
//         p->Date[i].id);
//     }
// }
// int findinfo(C*p)
// {
//     char arr[10];
//     int i = 0;
//     scanf("%s",arr);
//     for(i=0;i<p->size;i++)
//     {
//         if(0 == strcmp(arr,p->Date[i].name))
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int supersreach(C*p,int i,char a[])
// {
//     if(0 == strcmp(a,p->Date[i].name)||
//     (a[0] == p->Date[i].age&&a[1] == '\0')||
//     (((a[0]-'0')*10+(a[1]-'0')) == p->Date[i].age&&a[2] == '\0')||
//     (((a[0]-'0')*100+(a[1]-'0')*10+(a[0]-'0')) == p->Date[i].age&&a[3] == '\0')||
//     0 == strcmp(a,p->Date[i].tele)||
//     0 == strcmp(a,p->Date[i].id)||
//     0 == strcmp(a,p->Date[i].address))
//     {
//         return i;
//     } 
//     return -1;
// }
// void delinfo(C*p)
// {
//     int i;
//     int a = 0;
//     Peo tmp = {0};
//     printf("请问要全部删除吗:>0.单个删除\n");
//     scanf("%d",&a);
//     if(a != 0)
//     {
//         FILE*pf = fopen("test.dat","wb");
//         for(a=0;a<p->size;a++)
//         {
//             fwrite(&tmp,sizeof(Peo),1,pf);
//         }
//         fclose(pf);
//         pf = NULL;
//         p->size = 0;
//         p->capacity = 2;
//         return;
//     }
//     printf("请输入想要删除的名字:>");
//     i = findinfo(p);
//     if(i == -1)
//     {
//         printf("输入错误请重新输入\n");
//     }
//     else
//     {
//         for(i=i;i<p->size-1;i++)
//         {
//             p->Date[i] = p->Date[i+1];
//         }
//         p->size-=1;
//         printf("删除成功\n");
//     }
// }
// void sreachinfo(C*p)
// {
//     int i,b;
//     int flag = 0;
//     char a[20];
//     printf("请输入想要找的信息:>");
//     scanf("%s",a);
//     for(i=0;i<p->size;i++)
//     {
//         b = supersreach(p,i,a);
//         if(b != -1)
//         {
//             if(flag == 0)
//             {
//                 printf("%-s\t%-15s\t%-2s\t%-10s\t%-15s\t\n",
//                 "姓名","电话","年龄","地址","身份证号");
//             }
//             flag = 1;
//             printf("%-s\t%-15s\t%-2d\t%-10s\t%-15s\t\n",
//                 p->Date[b].name,
//                 p->Date[b].tele,
//                 p->Date[b].age,
//                 p->Date[b].address,
//                 p->Date[b].id);
//         }
//         if(flag == 0 && i == p->size-1)
//         {
//             printf("没有找到\n");
//         }
//     }
// }
// void modinfo(C*p)
// {
//     int i;
//     printf("请输入想要更改成员的名字:>");
//     i = findinfo(p);
//     if(i==-1)
//     {
//         printf("没有找到\n");
//     }
//     else
//     {
//         printf("请输入姓名:>");
//         scanf("%s",p->Date[i].name);
//         printf("请输入电话:>");
//         scanf("%s",p->Date[i].tele);
//         printf("请输入年龄:>");
//         scanf("%d",&p->Date[i].age);
//         printf("请输入地址:>");
//         scanf("%s",p->Date[i].address);
//         printf("请输入身份证号:>");
//         scanf("%s",p->Date[i].id);
//     }
// }
// void destoryContact(C*p)
// {
//     int a = 0;
//     printf("需要保存吗:>1.保存\n");
//     scanf("%d",&a);
//     if(a == 1)
//     {
//         saveinfo(p);
//     }
//     free(p->Date);
//     p->Date = NULL;
// }
// int compare3(const void *s1,const void *s2)
// {
//     return ((Peo*)s1)->num - ((Peo*)s2)->num;
// }
// int compare2(const void *s1,const void *s2)
// {
//     return strcmp(((Peo*)s1)->name,((Peo*)s2)->name);
// }
// int compare1(const void *s1,const void *s2)
// {
//     return ((Peo*)s1)->age - ((Peo*)s2)->age;
// }
// void sortinfo(C*p)
// {
//     int a;
//     menu2();
//     scanf("%d",&a);
//     if(a==2)
//     {
//         qsort(p->Date,p->size,sizeof(p->Date[0]),compare1);
//         printf("排序成功\n");
//     }
//     else if(a==3)
//     {
//         qsort(p->Date,p->size,sizeof(p->Date[0]),compare2);
//         printf("排序成功\n");
//     }
//     else if(a==1)
//     {
//         qsort(p->Date,p->size,sizeof(p->Date[0]),compare3);
//         printf("排序成功\n");
//     }
//     else
//     {
//         printf("已退出排序\n");
//     }
// }
// void saveinfo(C*p)
// {
//     int i =0;
//     Peo info;
//     FILE*pf = fopen("test.dat","wb");
//     if(pf == NULL)
//     {
//         printf("saveinfo::%s\n",strerror(errno));
//         return;
//     }
//     for(i=0;i<p->size;i++)
//     {
//         fwrite(&(p->Date[i]),sizeof(Peo),1,pf);
//     }
//     fclose(pf);
//     pf = NULL;
// }

// #include "test.h"
// int main()
// { 
//     int input;
//     C con;
//     initCon(&con);
//     do
//     {
//         menu();
//         scanf("%d",&input);
//         switch (input)
//         {
//         case Exit:
//             break;
//         case Add:
//             addinfo(&con);
//             break;
//         case Del:
//             delinfo(&con);
//             break;
//         case Show:
//             showinfo(&con);
//             break;
//         case Sreach:
//             sreachinfo(&con);
//             break;
//         case Modify:
//             modinfo(&con);
//             break;
//         case Sort:
//             sortinfo(&con);
//             break;
//         case Save:
//             saveinfo(&con);
//             break;
//         default:
//             printf("输入错误请重新输入\n");
//             break;
//         }
//     } while (input);
//     destoryContact(&con);
//     return 0;
// }
//注意点2
// #include<stdio.h>
// int main()
// {
//     float a,b;
//     char c;
//     int d;
//     scanf("%f%f %c%d",&a,&b,&c,&d);//%c之前要用空格隔开否则读取到的是空格
//     printf("%f %f %c %d\n",a,b,c,d);
//     return 0;
// }
//柔性数组与其相似标准型
// #include<stdlib.h>
// #include<stdio.h>
// typedef struct S
// {
//     int i;
//     int*arr;
// }s;
// int main()
// {
//     int i;
//     s*ps = (s*)malloc(sizeof(s));
//     ps->arr = (int*)malloc(5*sizeof(int));
//     for(i=0;i<5;i++)
//     {
//         ps->arr[i] = i;
//     }
//     int*ptr = (int*)realloc(ps->arr,5*sizeof(int));
//     if(ptr != NULL)
//     {
//         ps->arr = ptr;
//     }
//     for(i=5;i<10;i++)
//     {
//         ps->arr[i] = i;
//     }
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",ps->arr[i]);
//     }
//     free(ps->arr);
//     ps->arr = NULL;
//     free(ps);
//     ps = NULL;
//     return 0;
// }
//柔性数组
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int i;
//     struct S
//     {
//         int i;
//         int arr[];
//     };
//     struct S*ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//     ps->i = 100;
//     for(i=0;i<5;i++)
//     {
//         ps->arr[i] = i;
//     }
//     struct S*ptr = (struct S*)realloc(ps,5*sizeof(int));
//     if(ptr != 0)
//     {
//         ps = ptr;
//     }
//     for(i=5;i<10;i++)
//     {
//         ps->arr[i] = i;
//     }
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",ps->arr[i]);
//     }
//     free(ps);
//     ps = NULL;
//     return 0;
// }
//判断一个数是否有222
// #include<stdio.h>
// int count(int i)
// {
//     int z = 0;
//     do
//     {
//         if(i % 10==2)
//         {
//             int j = 0;
//             for(j=0;j<2;j++)
//             {
//                 i /= 10;
//                 if(i % 10 == 2)
//                 {
//                     z++;
//                 }
//             }
//         }
//         if(z == 2)
//         {
//             return 1;
//         }
//     } while (i/=10);
//     return 0;
// }
// int main()
// {
//     int a = 0;
//     int p = 0;
//     scanf("%d",&a);
//     if(a>=1 || a<=1000000)
//     {
//         int i = 0;
//         for(i=1;i<=a;i++)
//         {
//             if(count(i) == 1)
//             {
//                 p++;
//             }
//         }
//     }
//     printf("%d\n",p);
//     return 0;
// }
//小用memcpy memmove
// #include<stdio.h>
// #include<string.h>
// #include<assert.h>
// void*my_memcpy(void*dest,void*src,size_t count)
// {
//     char* ret = dest;
//     assert(dest);
//     assert(src);
//     while(count--)
//     {
//         *(char*)dest = *(char*)src;
//         ++dest;
//         ++src;
//     }
//     return ret;
// }
// int main()
// {
//     int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//     int arr2[10] = {0};
//     //my_memcpy(arr2,arr1,sizeof(arr1));
//     memmove(arr1+2,arr1,20);
//     return 0;
// }
//小用ctype
// #include<ctype.h>
// #include<stdio.h>
// int main()
// {
//     char ch = 'a';
//     int ret = isdigit(ch);
//     printf("%d",ret);
//     return 0;
// }
//查找左旋字符串
// #include<stdio.h>
// #include<string.h>
// void my_strncat(char*arr1,char*arr2,int len)
// {
//     arr1 = arr1 + len;
//     while(len--!=0)
//     {
//         *arr1 = *arr2;
//         arr1++;
//         arr2++;
//     }
// }
// int main()
// {
//     char arr1[30] = "abcdeef";
//     int len = strlen(arr1);
//     my_strncat(arr1,arr1,len);//这里使用strncat无法自身追加自身
//     printf("%s\n",arr1);
// }
//三部反转法
// #include<stdio.h>
// #include<string.h>
// void reverse(char*arr,int a)
// {
//     char*left = arr;
//     char*right = &arr[a];
//     while(left<right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }
// int main()
// {
//     char arr[] = "abcdef";
//     int n = 0;
//     int len = strlen(arr);
//     scanf("%d",&n);
//     reverse(arr,n-1);
//     reverse(arr+n,len-n-1);
//     reverse(arr,len-1);
//     printf("%s\n",arr);
//     return 0;
// }
//求数组中两个数之差的最小值
// #include<stdio.h>
// void scanArr(int*arr,int a)
// {
//     int i = 0;
//     for(i=0;i<a;i++)
//     {
//         scanf("%d",arr);
//         arr++;
//     }
// }
// int max(int*arr,int a)
// {
//     int i = 0;
//     int b = arr[0]-arr[1];
//     for(i=0;i<=a-1;i++)
//     {
//         int j = 0;
//         for(j=0;j<=a-1;j++)
//         {
//             if(i!=j)
//             {
//                 if(b<arr[i] - arr[j])
//                 {
//                     b = arr[i] - arr[j];
//                 }
//             }
//         }
//     }
//     return b;
// }
// int main()
// {
//     int a = 0;
//     scanf("%d",&a);
//     if(a>1&&a<=10000)
//     {
//         int arr[10000];
//         scanArr(arr,a);
//         int Max = max(arr,a);
//         printf("%d\n",Max);
//     }
//     else
//     {
//         printf("输出错误\n");
//     }
//     return 0;
// }
//喝汽水问题
// #include<stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int sum = n+n%2;
//     int empty = 0;
//     while(n/=2)
//     {
//         sum += n + empty;
//         empty = n%2;
//     }
//     printf("%d\n",sum);
//     return 0;
// }
//将一个数组的奇数放在偶数前面
// #include<stdio.h>
// void change(int*arr,int sz)
// {
//     int* left = arr;
//     int* right = arr + sz - 1;
//     while(left<right)
//     {
//         while(left<right&&(*left%2)==0)
//         {
//             left++;
//         }
//         while(left<right&&(*right%2)==1)
//         {
//             right--;
//         }
//         if(left<right)
//         {
//             int tmp = *left;
//             *left = *right;
//             *right = tmp;
//         }
//     }
// }
// void print(int arr[],int sz)
// {
//     int i = 0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     int arr[] = {1,3,5,7,9};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     change(arr,sz);
//     print(arr,sz);
//     return 0;
// }
//交换输入的数组
// #include<stdio.h>
// #include<string.h>
// #include<assert.h>
// void reverse(char*p)
// {
//     assert(p);
//     int len = strlen(p);
//     char*left = p;
//     char*right = p + len - 1;
//     while(left<right)
//     {
//         char tmp;
//         tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }
// int main()
// {
//     char ch[100] = {0};
//     gets(ch);
//     reverse(ch);
//     printf("%s",ch);
//     return 0;
// }
//水仙花数精简版
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i = 0;
//     for(i=0;i<=100000;i++)
//     {
//         int n = i;
//         int sum = 0;
//         int tmp = 1;
//         while(n/=10)
//         {
//             tmp++; //判断几位数
//         }
//         n = i;
//         while(n)
//         {
//             sum += (int)pow(n%10,tmp);
//             n /= 10;
//         }
//         if(sum == i)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
//简化阶梯型矩阵(持续更新中)
// #define ROW 20
// #define COL 20
// #include<stdio.h>
// #include<string.h>
// void print(int(*p)[COL],int row,int col)
// {
//     int i = 0;
//     for(i=0;i<row;i++)
//     {
//         int j = 0;
//         for(j=0;j<col;j++)
//         {
//             printf("%d ",p[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int arr[ROW][COL] = {0};//不将接受数组分装成一个函数，
//     int col = 0;              //因为其无法返回接受个数使代码复杂,所以将接受与输出放入同一个函数里
//     int row = 0;
//     int e = 0;
//     int n = 0;
//     char c,b;
//     char s[5] = {0};
//     while(1)
//     {
//         e = col+1;
//         col = 0;
//         scanf("%d",&arr[row][col]);
//         b = getchar();
//         if(b == '*'||b == '^'||b == '+'||b=='-'||b=='f')
//         {
//             goto next;
//         }
//         do
//         {
//             scanf("%d",&arr[row][col+1]);
//             col++;
//             c = getchar();
//         }while(c !='\n');
//         row++;
//     }
//     next:
//     if(b == '*')
//     {
//         //接受另一个矩阵
//     }      
//     print(arr,row,e);
//     return 0;
// }
//水仙花数
// #include<stdio.h>
// void getArr(int n,int *arr,int count,int* p1)
// {
//     if(n>9)
//     {
//         getArr(n/10,arr,count+1,p1);
//     }
//     (*p1)++;
//     arr[count] = n%10;
// }
// int main()
// {
//     int i = 0;
//     int a;
//     int count = 0;
//     int arr[5] = {0};
//     for(i=0;i<=100000;i++)
//     {
//         int y = 0;
//         getArr(i,arr,count,&y);
//         int j = 0;
//         int sum = 0;
//         int *p = arr;
//         int m = 0;
//         for(j=0;j<y;j++)
//         {
//             int z = 0;
//             a = 1;
//             for(z=0;z<y;z++)
//             {
//                 a *= p[m];
//             }
//             m++;
//             sum += a;
//         }
//         if(sum == i)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
//打印空心等边三角形
// #include<stdio.h>
// int main()
// {
//     char c;
//     int n,m,p;
//     scanf("%c",&c);
//     scanf("%d",&n);
//     if(n>0&&n<=100)
//     {
//         int i = 0;
//         int k = 1;
//         for(i=0;i<n-1;i++)
//         {
//             int j = 0;
//             for(j=0;j<n-1-i;j++)
//             {
//                 putchar(32);
//             }
//             printf("%c",c);
//             if(k!=1)
//             {
//                 m = 2*k-3;
//                 int a =0;
//                 for(a=0;a<2*k-3;a++)
//                 {
//                     putchar(32);
//                 }
//                 printf("%c",c);
//             }
//             printf("\n");
//             k++;
//         }
//         for(p=0;p<n;p++)
//         {
//             printf("%c ",c);
//         }
//         printf("\n");
//     }
//     else
//     {
//         printf("输出错误\n");
//     }
//     return 0;
// }
//求合进阶版
// #include<stdio.h>
// int main()
// {
//     int p =1;
//     do
//     {
//         long n = 0;
//         long sum = 0;
//         scanf("%d",&p);
//         int i = 0;
//         for(i=0;i<p;i++)
//         {
//             scanf("%ld",&n);
//             sum+=n;
//         }
//         if(p!=0)
//         {
//             printf("%ld\n",sum);
//         }
//     } while (p);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     long j,k;
//     int a;
//     long sum =0;
//     scanf("%d",&a);
//     for(int b = 1;b<=a;b++)
//     {
//         scanf("%ld",&j);
//         for(int c=1;c<=j;c++)
//         {
//             scanf("%ld",&k);
//             sum +=k;
//         }
//         printf("%ld\n",sum);
//         sum = 0;
//     }

//     return 0;
// }
//求和初阶版
// #include<stdio.h>
// int main()
// {
//     int i =0;
//     long a =0,b = 0;
//     scanf("%ld %ld",&a,&b);
//     printf("%ld\n",a+b);
//     while (scanf("%ld %ld",&a,&b)!=EOF)
//     {
//         printf("\n%ld\n",a+b);
//     } 
// }
// #include<stdio.h>
// int main()
// {
//     long i,j;
//     while(scanf("%ld %ld",&i,&j) != EOF)
//     {
//         printf("%ld",i+j);
//     }
//     return 0;
// }
//求和高阶版
// #include<stdio.h>
// int main()
// {
//     long p = 1;
//     long sum = 0;
//     int flag = 0;
//     char c;
//     while(1)
//     {
//         flag = 1;
//         sum = 0;
//         do
//         {
//             scanf("%ld",&p);
//             if(flag == 1 && p == 0)
//             {
//                 goto End;
//             }
//             flag = 0;
//             sum += p;
//             c = getchar();
//         } while (c != '\n');
//         printf("%ld\n",sum);
//     }
//     End:
//     return 0;
// }
//函数指针数组小例子
// #include <stdio.h>
// void print(int a)
// {
//     printf("%d\n",a);
// }
// void out(int b)
// {
//     printf("%d\n", b+1);
// }
// int main()
// {
//     void (*a[])(int)={print, out};
//     a[0](3);
//     a[1](5);
// }
//终极冒泡排序
// #include<stdio.h>
// struct Stu
// {
//     char name[20];
//     int age;
// };
// int my_strcmp(const char*e1,const char*e2)
// {
//     while(*e1)
//     {
//         if(*e1>*e2)
//         {
//             return -1;
//         }
//         if(*e1<*e2)
//         {
//             return 1;
//         }
//         e1++;
//         e2++;
//     }
//     return 0;
// }
// void print3(void*base,int sz)
// {
//     int i = 0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%s ",((struct Stu*)base+i)->name);
//         //printf("%d ",((struct Stu*)base+i)->age);
//     }
//     printf("\n");
// }
// void print2(void*base,int sz)
// {
//     int i = 0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%lf ",*((float*)base+i));
//     }
//     printf("\n");
// }
// void print1(void*base,int sz)
// {
//     int i = 0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d ",*((int*)base+i));
//     }
//     printf("\n");
// }
// void Swap(char*buf1,char*buf2,int width)
// {
//     int i = 0;
//     for(i=0;i<width;i++)
//     {
//         char tmp = *buf1;
//         *(buf1++) = *buf2;
//         *(buf2++) = tmp;
//     }
// }
// void superSort(void*base,int sz,int width,int(*comp)(void*e1,void*e2))
// {
//     int i = 0;
//     for(i=0;i<sz-1;i++)
//     {
//         int j = 0;
//         int flag = 0;
//         for(j=0;j<sz-1-i;j++)
//         {
//             if(comp((char*)base + j*width,(char*)base + (j+1)*width)>0)
//             {
//                 Swap((char*)base + j*width,(char*)base + (j+1)*width,width);
//                 flag = 1;
//             }
//         }
//         if(flag == 1)
//         {
//             break;
//         }
//     }
// }
// int comp_int(void*const e1,void*const e2)
// {
//     return *(int*)e1 - *(int*)e2;
// }
// int comp_flo(void*const e1,void*const e2)
// {
//     return *(float*)e1 - *(float*)e2;
// }
// int comp_age(void*const e1,void*const e2)
// {
//     return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
// }
// int comp_name(void*const e1,void*const e2)
// {
//     return my_strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
// }
// void test3(void(*print[])(void*,int)) 
// {
//     struct Stu s1[3] = {{"zhangshan",15},{"lisi",18},{"wangwu",20}};
//     int sz = sizeof(s1)/sizeof(s1[0]);
//     int width = sizeof(s1[0]);
//     superSort(s1,sz,sizeof(s1[0]),comp_name);
//     print[2](s1,sz);
// }
// void test2(void(*print[])(void*,int))
// {
//     float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0};
//     int sz = sizeof(f)/sizeof(f[0]);
//     int width = sizeof(f[0]);
//     superSort(f,sz,width,comp_flo);
//     print[1](f,sz);
// }
// void test1(void(*print[])(void*,int))
// {
//     int arr[] = {9,8,7,6,5,4,3,2,1,0};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int width = sizeof(arr[0]);
//     superSort(arr,sz,width,comp_int);
//     print[0](arr,sz);
// }
// int main()
// {
//     void(*print[3])(void*,int) = {print1,print2,print3};
//     test1(print);
//     test2(print);
//     test3(print);
//     return 0;
// }
//小型计算器
// #include<stdio.h>
// int Add(int x,int y)
// {
//     return x+y;
// }
// int Sub(int x,int y)
// {
//     return x-y;
// }
// int Mul(int x,int y)
// {
//     return x*y;
// }
// int Div(int x,int y)
// {
//     return x/y;
// }
// int Anwei(int x,int y)
// {
//     return x^y;
// }
// int main()
// {
//     printf("*********************\n");
//     printf("***1.Add     2.Sub***\n");
//     printf("***3.Mul     4,Div***\n");
//     printf("***5.Anwei  0.exit***\n");
//     int input = 0;
//     int (*parr[])(int,int) = {0,Add,Sub,Mul,Div,Anwei};
//     do
//     {
//         int i,j;
//         printf("请输入计算方式:>\n");
//         scanf("%d",&input);
//         printf("请输入操作数:>\n");
//         scanf("%d%d",&i,&j);
//         int p = parr[input](i,j);
//         printf("%d\n",p);
//     }while(input);
//     return 0;
// }
//几个指针
// char*(*pf)(char*,char*);
// char*(*pf2[4])(char*,char*);
//陷阱0
// #include<stdio.h>
// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[] = "abcdef";
//     if(arr1 == arr2)//陷阱示范
//     {
//         printf("hehe");
//     }
//     else
//     {
//         printf("haha");
//     }
//     return 0;
// }
//打印字符塔
// #include<stdio.h>
// int main()
// {
//     int a,i,h;
//     char ch = 'A';
//     printf("请输入要打的行数:>");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++)
//     {
//         ch = 'A';
//         for(h=0;h<a-i;h++)
//         {
//             putchar(32);
//         }
//         for(h=0;h<i;h++)
//         {
//             printf("%c",ch);
//             ch++;
//         }
//         ch--;
//         for(h=1;h<i;h++)
//         {
//             printf("%c",--ch);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//验证哥德巴赫猜想
// #include<stdio.h>
// #include<math.h>
// int is_prime(int x)
// {
//     int y = 0;
//     for(y=2;y<=sqrt(x);y++)
//     {
//         if(x%y==0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int (checkGoldbach(int a,int b))
// {
//     int i = 0;
//     int count = 0;
//     if(a%2==1)
//     {
//         a+=1;
//     }
//     for(i=a;i<=(b/2)*2;i+=2)
//     {
//         int h = 0;//打印2到i的素数
//         for(h=3;h<i;h+=2)
//         {
//             if(is_prime(h)==1)
//             {
//                 int q = i - h;
//                 if(is_prime(q)==1)
//                 {
//                     count++;
//                     break;
//                 }
//             }
//         }
//     }
//     if(count==(((b/2)*2-a)/2+1))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     printf("请输入想要验证的范围:>\n");
//     scanf("%d",&a);
//     printf("~\n");
//     scanf("%d",&b);
//     if(a>b)
//     {
//         a = a^b;
//         b = a^b;
//         a = a^b;
//     }
//     if(checkGoldbach(a,b) == 1)
//     {
//         printf("猜想正确\n");
//     }
//     else
//     {
//         printf("猜想错误\n");
//     }
//     return 0;
// }
//打印int大小
// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     printf("%lu",sizeof(int));
//     return 0;
// }
//实现大小端的判断
// #include<stdio.h>
// int check_sys()
// {
//     int a = 1;
//     return *(char*)&a;
// }
// int main()
// {
//     int a = 1;
//     if(check_sys() == 1)
//     {
//         printf("小端\n");
//     }
//     else
//     {
//         printf("大端\n");
//     }
//     return 0;
// }
//英寸换算
// #include<stdio.h>
// int main()
// {
//     float a;
//     scanf("%f",&a);
//     a/=30.48;
//     a*=12;
//     printf("%d ",(int)(a/12));
//     printf("%d",(int)a%12);
// }
//完美实现strlen函数
// #include<stdio.h>
// #include<assert.h>
// int my_strlen(const char*p)
// {
//     assert(p != NULL);
//     if(*p != '\0')
//     {
//         return my_strlen(p+1) + 1;//函数里面不能实现变量自增如my_strlen（p++） + 1就报错
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     char arr[] = "hello world";
//     int len = my_strlen(arr);
//     printf("%d\n",len);
//     return 0;
// }
//完美版模拟strcpy函数
// #include<stdio.h>
// #include<assert.h>
// char*my_strcpy(char*dest,const char*str)
// {
//     char*ret = dest;
//     assert(dest != NULL);
//     assert(str != NULL);
//     while(*dest++ = *str++)
//     {
//         ;
//     }
//     return ret;
// }
// int main()
// {
//     char arr1[] = "###########";
//     char arr2[] = "hello world";
//     printf("%s\n",my_strcpy(arr1,arr2));
//     return 0;
// }
//一次打印一个整形各个位上的数
// #include<stdio.h>
// void print(int n)
// {
//     if(n>9)
//     {
//         print(n/10);
//     }
//     printf("%d\n",n%10);
// }
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     print(n);
//     return 0;
// }
//一个数二进制中1的个数
// #include<stdio.h>
// int main()
// {
//     int n = 0;
//     int count = 0;
//     scanf("%d",&n);
//     while(n)
//     {
//         n = n&(n-1);
//         count++;
//     }
//     printf("%d\n",count);
//     return 0;
// }
//交换两个二进制的奇数位和偶数位
// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     scanf("%d",&a);
//     int d = a;
//     int i = 0;
//     int j = 0;
//     for(i=30;i>=0;i-=2)
//     {
//         int b = ((a>>i)&1);
//         printf("%d",b);
//     }
//     printf("\n");
//     for(j=31;j>=1;j-=2)
//     {
//         int c = ((d>>j)&1);
//         printf("%d",c);
//     }
//     return 0;
// }
//两个二进制表达中有几位不同
// int print(int x)
// {
//     int i = 0;
//     int count = 0;
//     for(i=0;i<32;i++)
//     {
//         if(((x>>i)&1) == 1)
//         {
//             count++;
//         }
//     }
//     return count;
// }
// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d",&a,&b);
//     int c = a^b;
//     int count = print(c);
//     printf("%d\n",count);
//     return 0;
// }
//完美扫雷游戏
/*#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 20  
#define COL 20
#define ROWS ROW + 2
#define COLS COL + 2
#define minenum 40
void initboard(char board[ROWS][COLS],int rows,int cols,char set)
{
    int i = 0;
    int j = 0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            board[i][j] = set;
        }
    }
}
void displayboard(char board[ROWS][COLS],int row,int col)
{
    int i = 0;
    int j = 0;
    printf("雷数为%d\n",minenum);
    for(i=0;i<=col;i++)
    {
        printf("%-2d ",i);
    }
    printf("\n");
    for(i=1;i<=row;i++)
    {
        printf("%-2d ",i);
        for(j=1;j<=col;j++)
        {
            printf("%-2c ",board[i][j]);
        }
        printf("\n");
    }
}
void getmine(char board[ROWS][COLS],int row,int col)
{
    int count = minenum;
    while(count)
    {
        int x = rand()%row+1;
        int y = rand()%row+1;
        if(board[x][y]=='0')
        {
            board[x][y]='1';
            count--;
        } 
    }
}
int check(char mine[ROWS][COLS],int x,int y)
{
    return mine[x-1][y]+
           mine[x+1][y]+
           mine[x][y+1]+
           mine[x][y-1]+
           mine[x+1][y+1]+
           mine[x-1][y+1]+
           mine[x+1][y-1]+
           mine[x-1][y-1]-8*'0';
}
int sum(char mine[ROWS][COLS],int row,int col)
{
    int i = 0;
    int j = 0;
    int l = 0;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(mine[i][j]=='*')
            {
                l++;
            }
        }
    }
    return l;
}
void dround(char mine[ROWS][COLS],char show[ROWS][COLS],int o,int p)
{
    int e = 0;
    int r = 0;
    int a = 0;
    int b = 0;
    int t = 0;
    for(e=-1;e<=1;e++)
    {
        for(r=-1;r<=1;r++)
        {
            a = o + e;
            b = p + r;
            t = check(mine,a,b);
            show[a][b] = t + '0';
        }
    }
}
void expand(char mine[ROWS][COLS], int x, int y, char show[ROWS][COLS])
{

    int i = -1;
    int j = -1;
    for (i = -1; i < 2; i++)      //边界
    {
        for (j = -1; j < 2; j++)
        {
            if (i != 0 || j != 0)      // 避免排到自己注意此处的逻辑关系
            {
                if (x + i >= 1 && x + i <= ROW && y + j >= 1 && y + j <= COL)     //x y坐标是否合法
                {
                    if (show[x + i][y + j] == '*'&&mine[x+i][y+j]!='1')
                    {

                        int count = check(mine, x + i, y + j);
                        if (count != 0)
                        {
                            show[x + i][y + j] = count + '0';
                        }
                        else
                        {
                            show[x + i][y + j] = ' ';
                            expand(mine, x + i, y + j, show);
                        }
                    }
                }
            }
        }
    }
}
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x = 0;
    int y = 0;
    int a = 0;
    int b = 0;
    int win = sum(show,ROW,COL);
    while(win>minenum)
    {
        printf("请输入坐标:>");
        scanf("%d,%d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            if(mine[x][y]=='1')
            {
                printf("你被炸死了...\n");
                displayboard(mine,row,col);
                break;
            }
            else
            {
                expand(mine,x,y,show);
                displayboard(show,row,col);
                win = sum(show,ROW,COL);
            }
        }
        else
        {
            printf("坐标输出错误，请重新输入!\n");
        }
    }
    if(win == minenum)
    {
        printf("恭喜你，扫雷成功!\n");
        displayboard(mine,row,col);
    }
}
void game()
{
    char mine[ROWS][COLS] = { 0 };
    char show[ROWS][COLS] = { 0 };
    initboard(mine,ROWS,COLS,'0');
    initboard(show,ROWS,COLS,'*');
    displayboard(show,ROW,COL);
    getmine(mine,ROW,COL);
    //displayboard(mine,ROW,COL);
    findmine(mine,show,ROW,COL);
}
void menu()
{
    printf("**********扫雷**********\n");
    printf("***********************\n");
    printf("*****1.play 0.exit*****\n");
    printf("***********************\n");
}
void test()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        menu();
        scanf("%d",&input);
        switch(input)
        {
            case 1:
            game();
            break;
            case 0:
            printf("退出游戏\n");
            break;
            default:
            printf("输入错误，请重新输入!\n");
            break;
        }
    }while(input);
}
int main()
{
    test();
    return 0;
}*/
//冒泡排序
// #include<stdio.h>
//  void bubble_sort(int arr[],int sz)
// {
//     int i = 0;
//     int flag = 1;
//     for(i=0;i<sz-1;i++)
//     {
//         int j = 0;
//         for(j=0;j<sz-1-i;j++)
//         {
//             if(arr[j+1]<arr[j])
//             {
//                 int tmp = 0;
//                 tmp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = tmp;
//                 flag = 0; 
//             }
//         }
//         if(flag == 1)
//         {
//             break;
//         }
//     }
// }
// int main()
// {
//     int i = 0;
//     int arr[] = {1,2,3,5,4,6,7,8,9,10};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     for(i=0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// 模拟strlen函数的制作
// #include<stdio.h>
// int my_strlen(char* str)
// {
//     if(*str != '\0')
//     return my_strlen(str+1)+1;
//     else
//     return 0;
// }
// int main()
// {
//     char arr[]="bit";
//     int n = my_strlen(arr);
//     printf("%d\n",n);
//     return 0;
// }
//兔子数列
// #include<stdio.h>
// int Fib(int n)
// {
//     if(n<=2)
//         return 1;
//     else
//         return Fib(n-1)+Fib(n-2);
// }
// int main()
// {
//     int ret = 0;
//     int n =0;
//     scanf("%d",&n);
//     ret = Fib(n);
//     printf("%d\n",ret);
//     return 0;
// }
//求素数
// #include<stdio.h>
// #include<math.h>
// int is_prime(int n)
// {
//     int j = 0;  
//     for(j=2;j<=sqrt(n);j++)
//     {
//         if(n%j==0)
//         return 0;
//     }
//     return 1;
// }
// int i = 0;
// int main()
// {
//     for(i=100;i<=200;i++)
//     {
//         if(is_prime(i)==1)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
//猜数字游戏
// #include<time.h>
// #include<stdlib.h>
// void menu ()
// {
//     printf("***************************\n");
//     printf("******1.play   0.exit******\n");
//     printf("***************************\n");
// }
// void game()
// {
//     int guess = 0;
//     int ret = 0;
//     ret = rand();
//     ret = ret%100+1;
   
//     while(1)
//     {
//         printf("猜猜数字:>");
//         scanf("%d",&guess);
//         if(ret>guess)
//         {
//             printf("猜小了\n");
//         }
//         else if(ret<guess)
//         {
//             printf("猜大了\n");
//         }
//         else
//         {
//             printf("恭喜你，猜中了!\n");
//             break;
//         }
//     }
// }
// int i = 0;
// int main()
// {
//     srand((unsigned int)time(NULL));
//     do
//     {
//        menu();
//        printf("请选择:>");   
//        scanf("%d",&i);
//        switch(i)
//        {
//         case 1:
//         game();
//         break;
//         case 0:
//         printf("游戏结束\n");
//         break;
//         default:
//         printf("请从新输入\n");
//         break;
//        }/* code */
//     } while (i);
//     return 0;
// }   
//打印乘法表
// #include<stdio.h>
// int i = 0;
// int main()
// {
//     for(i=1;i<=9;i++)
//     {
//         int j = 0;
//         for(j=1;j<=i;j++)
//         {
//             printf("%d*%d=%-2d ",i,j,i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//比较十个数的大小
// #include<stdio.h>
// int arr[10]={0};
// int max=0;
// int sz=sizeof arr /sizeof arr[0];
// int i=0;
// int main()
// {
//     for(i=0;i<sz;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     printf("max=%d",max);
//     return 0;
// }
//求1-1/2+1/3-1/4....
// #include<stdio.h>
// int i = 0;
// double a = 0.0;
// int main()
// {
//     for(i=1;i<=100;i++)
//     {
//         if(i%2==1)
//         {
//             a=a+1.0/i;
//         }
//         else
//         {
//             a=a-1.0/i;
//         }
//     }
//     printf("%lf",a);
//     return 0;
// }
//数九
// #include<stdio.h>
// int i = 0;
// int count = 0;
// int main()
// {
//     for(i=1;i<=100;i++)
//     {
//         if(i%10==9 || i/9==10)
//         {
//             printf("%d ",i);
//             count++;
//         }
//     }
//     printf("\n%d\n",count);
// }
//模拟用户登录
// #include<string.h>
// #include<stdio.h>
// int i=0;
// char password[20]={0};
// int main()
// {
//     for(i=0;i<3;i++)
//     {
//         printf("请输入密码:>");
//         scanf("%s",password);
//         if(strcmp(password,"123456")==0)
//         {
//         printf("密码正确\n");
//         break;
//         }
//     }
//     if(i==3)
//     printf("密码失效\n");
//     return 0;
// }
//求字符地址大小
// #include<stdio.h>
// int main()
// {
//     char ch = "w";
//     char*pc =&ch;
//     printf("%d\n",sizeof(pc));
//     return 0;
// }
//比较两个数大小
// #include<stdio.h>
// int Max(int x, int y)
// {
//     if (x > y)
//     return x;
//     else
//     return y;
// }
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     int max = 0;
//     scanf("%d%d",&num1,&num2);
//     max=Max(num1,num2);
//     printf("max=%d\n",max);
//     return 0;
// }
//比较两个数大小
// #include<stdio.h>
// {
//     int a = 0
//     int b = 10;
//     max = (a > b ? a : b);
//     return 0;
// }
//顺序数
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d",&a);
//     b = a%10;
//     do
//     {
//         if(a%10!=0)
//         {
//             printf("%d",a%10);
//         }
//         if(a%10==0&&b!=0)
//         {
//             printf("%d",a%10);
//         }
//     } while (a/=10);
    
// }
//求英文字符大小
// #include<stdio.h>
// int main()
// {
//     printf("%lu\n",sizeof(char));
//     return 0;
// }