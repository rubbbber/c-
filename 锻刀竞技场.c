//分数逼近
//在保证分母不超过给定整数n的条件下，求数值上最接近给定小数d的最简分数。
//如果这个数为整数，则输出整数，并输出两者绝对值之差，
//如果答案不止一种则输出“More than ome!“。
//共两行，第一行为一个正整数n(1<=n<10^6),为所给小数d(1<=d<=100),保证d的小数点后不超过10位
// #include<stdio.h>
// #include<math.h>
// double Abs(double a)
// {
//     if(a<0)
//     {
//         return -1*a;
//     }
//     return a;
// }
// int main()
// {
//     long long a,i,d = 1,h;
//     double b,c,f;
//     scanf("%lld%lf",&a,&b);
//     c = b-(int)b;
//     for(i=1;i<=a;i++)
//     {
//         if(c > i*b-(int)(i*b))
//         {
//             c = i*b-(int)(i*b);
//             d = i;
//         }
//         if(c > (int)(i*b)+1-i*b)
//         {
//             c = (int)(i*b)+1-i*b;
//             d = i;
//         }
//     }
//     if(d*b-(int)(b*d)>(int)(b*d)+1-d*b)
//     {
//         h = (int)(b*d)+1;
//     }
//     else if(d*b-(int)(b*d)<(int)(b*d)+1-d*b)
//     {
//         h = (int)(b*d);
//     }
//     else
//     {
//         printf("More than one!\n");
//         return 0;
//     }
//     f = Abs(1.0*h/d-b);
//     if(f == 0.0)
//     {
//         printf("%lld %.10lf",h,f);
//         return 0;
//     }
//     printf("%lld/%lld %.10lf\n",h,d,f);
// }
//小A放学回家的路上有一条街，街上有n家饮品店，每家都有特色饮料。
//由于特色饮料有限，第i家饮料店中最多只能点ai份，
//小A想知道走完这条街后，有多少种不同的选购方案能恰好点到k份饮品。
//当且仅当存在至少一家店购买的饮品数量不同时，才认为两种方案是不同的
//第一行为题意所述的两个正整数n,k（1<=n,k<=1000)
//第二行为n个数a1,a2,a3,....,an（0<ai<=n)，为各个店面能够购买的饮品上限
// #include<stdio.h>
// static int mod = 998244353;
// int max(int a,int b)
// {
//     return a>b?a:b;
// }
// int main()
// {
//     int n,k,a[1005] = {0};
//     long long F[1005] = {0},sum;
// 	F[0]=1;
// 	scanf("%d%d",&n,&k);
// 	for(int i=1;i<=n;i++)
// 	{
//         scanf("%d",&a[i]);
//     }
// 	for(int i=1;i<=n;++i)
//     {
// 		sum=0;
// 		for(int j=k;j>=max(k-a[i]+1,0);j--)
//         {
// 			sum+=F[j];
//         }
// 		for(int j=k;j>=0;j--)
//         {
// 			sum-=F[j];
// 			if(j-a[i]>=0)
// 			{
//                 sum+=F[j-a[i]];
//                 F[j]=(F[j]+sum)%mod;
//             }
// 		}
// 	}
// 	printf("%lld\n",F[k]%mod);
// 	return 0;
// } 
//小Q不慎掉入一个二维世界xOy里，他希望从让现在站的位置（xs，ys）走到逃生出口（xt，yt）。
//很不巧的是，小Q收到一股神奇的力量的作用，使得他只能按照如下规则行走：
//1.只能沿着xy坐标轴平行方向行走；
//2.每当走到整点（即坐标均为整数的格点）时，必须向左或向右转。
//小Q希望尽快离开这个地方以恢复正常生活，你能帮他找到离开所需的最短的步数吗？
//输入有1行，包括四个整数xs，ys，xt，yt（-10000<=xs,ys,xt,yt<10000),分别为起点和目标点坐标
// #include<stdio.h>
// int main()
// {
//     int a,b,c,d,e,f;
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     e = d - b;
//     f = c - a;
//     if(e<0)
//     {
//         e = -1*e;
//     }
//     if(f<0)
//     {
//         f = -1*f;
//     }
//     if(e>f)
//     {
//         a = ((e-f)/2)*2;
//         printf("%d\n",a+e+f);
//     }
//     else if(f>=e)
//     {
//         a = ((f-e)/2)*2;
//         printf("%d\n",a+e+f);
//     }
// }
//矩阵转置
// #include<stdio.h>
// int main()
// {
//     int arr[800][800] = {0},a,i,j=0;
//     long long count = 0;
//     scanf("%d",&a);
//     for(i=0;i<a;i++)
//     {
//         for(j=0;j<a;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<a;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             if(arr[i][j]!=arr[j][i])
//             {
//                 count++;
//             }
//         }
//     }
//     printf("%lld\n",count);
// }
//打印棱形
// #include<stdio.h>
// int main()
// {
//     int a,b,c,d=0,e,i;
//     scanf("%d",&a);
//     e = a-1;
//     for(i=0;i<(a/2)+1;i++)
//     {
//         for(b=0;b<e;b++)
//         {
//             putchar(32);
//         }
//         putchar('*');
//         putchar(32);
//         for(c=0;c<d;c++)
//         {
//             printf("* ");
//         }
//         d+=2;
//         e-=2;
//         if(a != 1)
//         {
//             printf("\n");
//         }
//     }
//     e=2;
//     d=a-3;
//     for(i=0;i<(a/2);i++)
//     {
//         for(b=0;b<e;b++)
//         {
//             putchar(32);
//         }
//         putchar('*');
//         putchar(32);
//         for(c=0;c<d;c++)
//         {
//             printf("* ");
//         }
//         e+=2;
//         d-=2;
//         if(i != (a/2)-1)
//         {
//             printf("\n");
//         }
//     }
// }
//水仙花数
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     long long N,a,b,i,c,d = 0;
//     scanf("%lld",&N);
//     a = pow(10,N-1);
//     b = pow(10,N);
//     for(i=a;i<b;i++)
//     {
//         c = i;
//         d = 0;
//         while(c>9)
//         {
//             d += pow(c%10,N);
//             c/=10;
//         }
//         d += pow(c%10,N);
//         if(d == i)
//         {
//             printf("%lld\n",i);
//         }
//     }
// }
//魔法数
// #include<stdio.h>
// #include<math.h>
// long long Pow(long long x,int d)
// {
//     if(d == 0)
//     {
//         return 1;
//     }
//     if(d == 1)
//     {
//         return x;
//     }
//     if(d%2 == 0)
//     {
//         return Pow(x*x,d/2);
//     }
//     else
//     {
//         return Pow(x*x,d/2)*x;
//     }
// }
// long long POW(long long x,int d)
// {
//     int i = 0;
//     long long z = x;
//     for(i=0;i<d-1;i++)
//     {
//         x *= z;
//     }
//     return x;
// }
// int main()
// {
//     int N,x,l=1,flag;
//     long long a=1,b=1,c=1,d=1;
//     long long z = POW(3,10);
//     while (scanf("%d%d",&x,&N)!=EOF)
//     {
//         flag = 1;
//         printf("Case %d:\n",l++);
//         for(a=1;a<=N;a++)
//         {
//             for(b=a;b<=N;b++)
//             {
//                 for(c=b;c<=N;c++)
//                 {
//                     for(d=c;d<=N;d++)
//                     {
//                         if(a+b+c<d)
//                         {
//                             break;
//                         }
//                         //if(pow(a,x)+pow(b,x)+pow(c,x) == pow(d,x))
//                         if(Pow(a,x)+Pow(b,x)+Pow(c,x) == Pow(d,x))
//                         //if(POW(a,x)+POW(b,x)+POW(c,x) == POW(d,x))
//                         {
//                             if(flag == 1)
//                             {
//                                 flag = 0;
//                             }
//                             printf("%lld^%d+%lld^%d+%lld^%d=%lld^%d\n",a,x,b,x,c,x,d,x);
//                         }
//                     }
//                 } 
//             }
//         }
//         if(flag == 1)
//         {
//             printf("No such numbers.\n");
//         }
//     }
// }
//排队（精简版）
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// typedef struct Peo
// {
//     char name[10];
//     int row;
//     int caseNum;
// }P;
// typedef struct PeoLink
// {
//     char name[10];
//     int row;
//     int caseNum;
//     int num;
//     struct PeoLink*fwd;
//     struct PeoLink*bwd;
// }PL;
// typedef struct Con
// {
//     int capacity;
//     int top;
//     P p[];
// }C;
// static int l = 0;
// static int flag = 1;
// static PL*root = NULL;
// void Free()
// {
//     PL*next1,*next2;
//     for (next1=root;(next1=next1->fwd)!=NULL;root=next1)
//     {
//         if (root->bwd!=NULL)
//         {
//             for (next2=root;(next2=next2->bwd)!=NULL;root=next2)
//             {
//                 free(root);
//             }
//             free(root);
//         }
//         else
//         {
//             free(root);
//         }
//     }
//     free(root);
// }
// void adjust(PL*current,char arr[10],C*ps)
// {
//     PL*next1,*next2,*first;
//     if(root == NULL)
//     {
//         return;
//     }
//     if(current->caseNum != ps->p[0].caseNum)
//     {
//         return;
//     }
//     for(next1=current;current!=NULL;current=next1)
//     {
//         next1=next1->fwd;
//         first = current;
//         if(strcmp(current->name,arr)==0)
//         {
//             if(current->num != 0)
//             {
//                 continue;
//             }
//             current->num = -1;
//             printf("%s",current->name);
//             while ((current=current->bwd)!=NULL)
//             {
//                 printf(" %s",current->name);
//             }
//             printf("\n");
//             return;
//         }
//         if(current->bwd!=NULL)
//         {
//             for(next2=current;(next2=next2->bwd)!=NULL;current=next2)
//             {
//                 if(strcmp(next2->name,arr)==0)
//                 {
//                     if(next2->num != 0)
//                     {
//                         continue;
//                     }
//                     if(first->num == 0)
//                     {
//                         first->num = -1;
//                         printf("%s",first->name);
//                         while ((first=first->bwd)!=NULL)
//                         {
//                             first->num = -1;
//                             printf(" %s",first->name);
//                         }
//                         printf("\n");
//                         return;
//                     }
//                     while((first = first->bwd)->num!=0)
//                     {
//                         ;
//                     }
//                     first->num = -1;
//                     printf("%s",first->name);
//                     while ((first=first->bwd)!=NULL)
//                     {
//                         first->num = -1;
//                         printf(" %s",first->name);
//                     }
//                     printf("\n");
//                     return;
//                 }
//             }
//         }
//     }
// }
// void modifynum(PL*current,C*ps)
// {
//     PL*next1,*next2;
//     if(root == NULL)
//     {
//         return;
//     }
//     if(current->caseNum != ps->p[0].caseNum)
//     {
//         return;
//     }
//     for(next1=current;current!=NULL;current=next1)
//     {
//         next1=next1->fwd;
//         if(current->num==-1)
//         {
//             continue;
//         }
//         if(current->num == 0)
//         {
//             current->num = 1;
//             printf("%s\n",current->name);
//             return;
//         }
//         if(current->bwd!=NULL)
//         {
//             for(next2=current;current!=NULL;current=next2)
//             {
//                 next2=next2->bwd;
//                 if(current->num == 0)
//                 {
//                     current->num = 1;
//                     printf("%s\n",current->name);
//                     return;
//                 }
//             }
//         }
//     }
// }
// PL* creatPl(PL**rootp,char arr[30],C*ps)
// {
//     int i;PL*current = *rootp;PL*next1,*next2,*first;
//     for(i=0;i<ps->top;i++)
//     {
//         if(strcmp(ps->p[i].name,arr)==0)
//         {
//             break;
//         }
//     }
//     PL*new = (PL*)malloc(sizeof(PL));
//     new->fwd = NULL;
//     new->bwd = NULL;
//     strcpy(new->name,arr);
//     new->caseNum = l;
//     if(i == ps->top)
//     {
//         new->row = 0;
//     }
//     else
//     {
//         new->row = ps->p[i].row;
//     }
//     new->num = 0;
//     if(flag == 1)
//     {
//         *rootp = new;
//         root = new;
//         flag = 0;
//         return NULL;
//     }
//     if(new->caseNum!=(*rootp)->caseNum)
//     {
//         for(next1=current;(next1=next1->fwd)!=NULL;current=next1)
//         {
//             ;
//         }
//         current->fwd = new;
//         return new;
//     }
//     for(next1=current;(next1=next1->fwd)!=NULL;current=next1)
//     {
//         if(current->row == new->row&&current->row != 0)
//         {
//             for(next2=current;(next2=next2->bwd)!=NULL;current=next2)
//             {
//                 ;
//             }
//             if(current->num != 0)
//             {
//                 continue;
//             }
//             current->bwd = new;
//             return NULL;
//         }
//     }
//     if(current->row == new->row&&current->row != 0)
//     {
//         first = current;
//         for(next2=current;(next2=next2->bwd)!=NULL;current=next2)
//         {
//             ;
//         }
//         if(current->num != 0)
//         {
//             first->fwd = new;
//             return NULL;
//         }
//         current->bwd = new;
//         return NULL;
//     }
//     current->fwd = new;
//     return NULL;
// }
// int main()
// {
//     int a,n,i,j,k,flag=1;char arr[2][30] = {0};
//     PL*current,*currentp;
//     C*ps;
//     do
//     {
//         l++;
//         ps = (C*)malloc(8+2*sizeof(P));
//         ps->capacity = 2;
//         ps->top = 0;
//         scanf("%d",&n);
//         if(n != 0)
//         {
//             printf("Case #%d:\n",l);
//         }
//         for(i=1;i<=n;i++)
//         {
//             scanf("%d",&k);
//             for(j=0;j<k;j++)
//             {
//                 if(ps->top == ps->capacity)
//                 {
//                     C*ptr = (C*)realloc(ps,8+(ps->capacity+1)*sizeof(P));
//                     if(ptr != NULL)
//                     {
//                         ps = ptr;
//                         ps->capacity++;
//                     }
//                 }
//                 scanf("%s",ps->p[ps->top].name);
//                 ps->p[ps->top].row = i;
//                 ps->p[ps->top].caseNum = l;
//                 ps->top++;
//             }
//         }
//         while (n != 0)
//         {
//             scanf("%s",arr[0]);
//             if(strcmp(arr[0],"enqueue")==0)//制作双链表
//             {
//                 scanf("%s",arr[1]);
//                 currentp = creatPl(&current,arr[1],ps);
//                 if(currentp != NULL)
//                 {
//                     current = currentp;//current为每一个case的首节点
//                 }
//             }
//             else if(strcmp(arr[0],"dequeue")==0)//将num改为1
//             {
//                 modifynum(current,ps);
//             }
//             else if(strcmp(arr[0],"deqteam")==0)//修改双链表链接顺序
//             {
//                 scanf("%s",arr[1]);
//                 adjust(current,arr[1],ps);
//             }
//             else if(strcmp(arr[0],"stop")==0)
//             {
//                 free(ps);
//                 ps = NULL;
//                 break;
//             }
//         }
//     } while (n != 0);
//     Free();
// }
//搭积木
//有编号0-（N-1）的若干个积木块从小到大的顺序排成一行，每个积木块所在位置为其对应编号。
//一个机器人可以操作这些积木块，机器人可以执行如下指令：
//*mv a on b
//将a和b所在列a，b之上所有积木恢复到最初其所在的位置上，然后将积木a搁置在积木块b之上。
//*mv a ov b
//将积木块a之上所有积木块恢复到最初其所在位置上，然后将积木块a放置在积木块b所在列的顶端。
//*st a on b
//将积木块b之上所有积木块恢复到z最初其位置上，然后将积木块a及其上的所有积木放置在积木块b之上。
//*st a ov b
//将积木块a及其上的所有积木放置在积木块b所在列的顶端。
//xh a an b
//交换a和b所在的列
//*q
//退出
// #include<stdio.h>
// #include<string.h>
// #include<assert.h>
// typedef struct WHERE
// {
//     int row;
//     int col;
// }W;
// void initarr(char arr[25][25],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         arr[i][0] = i + '0';
//     }
// }
// void getadd(char a,char ac[25][25],W*x,int n)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         j = 0;
//         while (ac[i][j] != 0)
//         {
//             if(ac[i][j] == a)
//             {
//                 x->row = i;
//                 x->col = j;
//                 return;
//             }
//             j++;
//         }
//     }
// }
// void print(char arr[25][25],int n)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         printf("%d:",i);
//         j = 0;
//         while (arr[i][j] != 0)
//         {
//             printf(" %c",arr[i][j]);
//             j++;
//         }
//         printf("\n");
//     }
// }
// int top(char arr[25][25],int row,int col)
// {
//     int i =1;
//     while(arr[row][col+i] != 0)
//     {
//         i++;
//     }
//     return col+i;
// }
// void recovery(char arr[25][25],int row,int col)
// {
//     int i = 1;
//     while(arr[row][col+i] != 0)
//     {
//         if(arr[arr[row][col+i]-'0'][0] != 0)
//         {
//             recovery(arr,arr[row][col+i]-'0',0);
//         }
//         arr[arr[row][col+i]-'0'][0] = arr[row][col+i];
//         arr[row][col+i] = 0;
//         i++;
//     }
// }
// int main()
// {
//     int n,l,i;W A;W B;
//     W*w1 = &A;
//     W*w2 = &B;//也可以用malloc这样可以不写W A，W B直接创建指针malloc
//     char arr[25][25] = {0};
//     char*fwd,*bwd,*ch1,*ch2;char con[20];
//     char a,b,tmp;
//     char(*pa)[25] = arr;
//     scanf("%d\n",&n);
//     initarr(arr,n);
//     while(1)
//     {
//         ch1 = NULL;
//         ch2 = NULL;
//         fgets(con,20,stdin);
//         fwd = strtok(con," ");
//         if(strcmp(fwd,"q\n")==0)
//         {
//             break;
//         }
//         ch1 = strtok(NULL," ");
//         bwd = strtok(NULL," ");
//         ch2 = strtok(NULL," \n");
//         assert(ch1);
//         assert(ch2);
//         a = ch1[0];
//         b = ch2[0];
//         getadd(a,arr,w1,n);
//         getadd(b,arr,w2,n);
//         if (a == b||w1->row == w2->row)
//         {
//             continue;
//         }
//         if(strcmp(fwd,"mv")==0)
//         {
//             if(strcmp(bwd,"on")==0)
//             {
//                 recovery(arr,w1->row,w1->col);//递归有可能发生摧毁积木后
//                 recovery(arr,w2->row,w2->col);//的某个积木归位时位置被占用的情况
//                 getadd(a,arr,w1,n);
//                 getadd(b,arr,w2,n);
//                 arr[w2->row][w2->col+1] = arr[w1->row][w1->col];
//                 arr[w1->row][w1->col] = 0;
//             }
//             else if(strcmp(bwd,"ov")==0)
//             {
//                 recovery(arr,w1->row,w1->col);
//                 getadd(a,arr,w1,n);
//                 l = top(arr,w2->row,w2->col);
//                 arr[w2->row][l] = arr[w1->row][w1->col];
//                 arr[w1->row][w1->col] = 0;
//             }
//         }
//         else if(strcmp(fwd,"st")==0)
//         {
//             if(strcmp(bwd,"on")==0)
//             {
//                 recovery(arr,w2->row,w2->col);
//                 getadd(b,arr,w2,n);
//                 l = top(arr,w1->row,w1->col);
//                 for(i=0;i<l-w1->col;i++)
//                 {
//                     arr[w2->row][w2->col+i+1] = arr[w1->row][w1->col+i];
//                     arr[w1->row][w1->col+i] = 0;
//                 }
//             }
//             else if(strcmp(bwd,"ov")==0)
//             {
//                 i = 0;
//                 l = top(arr,w2->row,w2->col);
//                 while(arr[w1->row][w1->col+i]!=0)
//                 {
//                     arr[w2->row][l+i] = arr[w1->row][w1->col+i];
//                     arr[w1->row][w1->col+i] = 0;
//                     i++;
//                 }
//             }
//         }
//         else if(strcmp(fwd,"xh")==0)
//         {
//             i = 0;
//             while (arr[w1->row][i] != 0||arr[w2->row][i] != 0)
//             {
//                 tmp = arr[w1->row][i];
//                 arr[w1->row][i] = arr[w2->row][i];//交换不能用指针毕竟为顺序表
//                 arr[w2->row][i] = tmp;
//                 i++;
//             }
//         }
//     }
//     print(arr,n);
// }      
//酒酒花数                                         
//如果一个整数的各位（个十百千）数之和为某个前缀则其称为酒酒花数
//如199就为酒酒花数因为1+9+9=19为199的前两位，198则不是酒酒花数因为1+9+8=18不为任何数的前缀
//求n位数的酒酒花数有多少个（1<=n<=100）
// #include<stdio.h>
// #define MOD 100000007
// int main()
// {
//     long long dp[1100][100] = {0},sum = 0,ssum = 0;
//     int i,j,k,n;
//     scanf("%d",&n);
//     if(n == 1)
//     {
//         printf("10\n");
//     }
//     for(i=0;i<1100;i++)
//     {
//         for(j=0;j<=99;j++)
//         {
//             if(i == 0)
//             {
//                 dp[i][j] = 1;
//                 continue;
//             }
//             if((9*j)<i)
//             {
//                 dp[i][j] = 0;
//                 continue;
//             }
//             for(k=0;k<10;k++)
//             {
//                 dp[i][j] += dp[i-k][j-1];
//                 dp[i][j] %= MOD;
//                 if(i == k)
//                 {
//                     break;
//                 } 
//             }
//         }
//     }
//     for(i=1;i<10;i++)
//     {
//         ssum += dp[i*9][n-2];
//         ssum %= MOD;
//     }
//     ssum *=10;
//     ssum %= MOD;
//     ssum += 9;
//     if(n<3)
//     {
//         printf("%lld\n",ssum);
//         return 0;
//     }
//     for(i=1;i<10;i++)
//     {
//         for(j=0;j<10;j++)
//         {
//             sum += dp[i*99+j*9][n-3];
//             sum %= MOD;
//         }
//     }
//     sum *= 10;
//     sum %= MOD;
//     ssum += sum;
//     printf("%lld\n",ssum);
// }     
//序列(找规律法)
//质因数仅为2，3，5的数组成一个序列1，2，3，4，5，6，8，9.....
//输入一个数n（1<=n<=10000)求其对应数列位次对应的值为多少
// #include<stdio.h>
// #include<stdlib.h>
// long long min(long long x,long long y,long long z)
// {
//     return x<y?(x<z?x:z):(y<z?y:z);
// }
// int main()
// {
//     unsigned long long arr[10001] = {1,2,3,5},p1=0,p2=0,p3=0,x=2,y=3,z=5;
//     int i,n;
//     for(i=1;i<10001;i++)
//     {
//         arr[i] = min(x*arr[p1],y*arr[p2],z*arr[p3]);
//         if(arr[i] == x*arr[p1])
//         {
//             p1++;
//         }
//         if(arr[i] == y*arr[p2])
//         {
//             p2++;
//         }
//         if(arr[i] == z*arr[p3])
//         {
//             p3++;
//         }
//     }
//     scanf("%d",&n);
//     printf("%lld",arr[n-1]);
// }
//序列(暴力解题法)
// #include<stdio.h>
// #include<stdlib.h>
// void bubble_sort(unsigned long long arr[],int sz)
// {
//     int i = 0;
//     int flag = 1;
//     for(i=0;i<sz-1;i++)-
//     {
//         int j = 0;
//         for(j=0;j<sz-1-i;j++)
//         {
//             if(arr[j+1]<arr[j])
//             {
//                 unsigned long long tmp = 0;
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
//     int a = 0,c = 0;
//     unsigned long long arr[30000] = {0};
//     unsigned long long x,y,z,sum=1,sum2=1,sum3=1;
//     unsigned long long j=2,k=3,l=5;
//     for(x=0;x<64;x++)
//     {
//         j = 2;
//         if(x == 0)
//         {
//             j = 1;
//         }
//         sum *= j;
//         sum3 = sum;
//         for(y=0;y<41;y++)
//         {
//             k = 3;
//             if(y == 0)
//             {
//                 k = 1;
//             }
//             sum *= k;
//             sum2 = sum;
//             if(sum >1999999999999999999)
//             {
//                 break;
//             }
//             for(z=0;z<25;z++)
//             {
//                 l = 5;
//                 if(z == 0)
//                 {
//                     l = 1;
//                 }
//                 sum *= l;
//                 if(sum >1999999999999999999)
//                 {
//                     break;
//                 }
//                 else
//                 {
//                     arr[c] = sum;
//                     c++;
//                 }
//             }
//             sum = sum2;
//         }
//         sum = sum3;
//     }
//     bubble_sort(arr,c);
//     while(scanf("%d",&a)!=EOF)
//     {
//         printf("%lld\n",arr[a-1]);
//     }
// }