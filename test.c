//陷阱0
#include<stdio.h>
int main()
{
    char arr1[] = "abcdef";
    char arr2[] = "abcdef";
    if(arr1 == arr2)//陷阱示范
    {
        printf("hehe");
    }
    else
    {
        printf("haha");
    }
    return 0;
}
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
//初级完美扫雷游戏
// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>
// #define ROW 20  
// #define COL 20
// #define ROWS ROW + 2
// #define COLS COL + 2
// #define minenum 40
// void initboard(char board[ROWS][COLS],int rows,int cols,char set)
// {
//     int i = 0;
//     int j = 0;
//     for(i=0;i<rows;i++)
//     {
//         for(j=0;j<cols;j++)
//         {
//             board[i][j] = set;
//         }
//     }
// }
// void displayboard(char board[ROWS][COLS],int row,int col)
// {
//     int i = 0;
//     int j = 0;
//     printf("雷数为%d\n",minenum);
//     for(i=0;i<=col;i++)
//     {
//         printf("%-2d ",i);
//     }
//     printf("\n");
//     for(i=1;i<=row;i++)
//     {
//         printf("%-2d ",i);
//         for(j=1;j<=col;j++)
//         {
//             printf("%-2c ",board[i][j]);
//         }
//         printf("\n");
//     }
// }
// void getmine(char board[ROWS][COLS],int row,int col)
// {
//     int count = minenum;
//     while(count)
//     {
//         int x = rand()%row+1;
//         int y = rand()%row+1;
//         if(board[x][y]=='0')
//         {
//             board[x][y]='1';
//             count--;
//         } 
//     }
// }
// int check(char mine[ROWS][COLS],int x,int y)
// {
//     return mine[x-1][y]+
//            mine[x+1][y]+
//            mine[x][y+1]+
//            mine[x][y-1]+
//            mine[x+1][y+1]+
//            mine[x-1][y+1]+
//            mine[x+1][y-1]+
//            mine[x-1][y-1]-8*'0';
// }
// int sum(char mine[ROWS][COLS],int row,int col)
// {
//     int i = 0;
//     int j = 0;
//     int l = 0;
//     for(i=1;i<=row;i++)
//     {
//         for(j=1;j<=col;j++)
//         {
//             if(mine[i][j]=='*')
//             {
//                 l++;
//             }
//         }
//     }
//     return l;
// }
// void dround(char mine[ROWS][COLS],char show[ROWS][COLS],int o,int p)
// {
//     int e = 0;
//     int r = 0;
//     int a = 0;
//     int b = 0;
//     int t = 0;
//     for(e=-1;e<=1;e++)
//     {
//         for(r=-1;r<=1;r++)
//         {
//             a = o + e;
//             b = p + r;
//             t = check(mine,a,b);
//             show[a][b] = t + '0';
//         }
//     }
// }
// void circle(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y,int row,int col)
// {
//     int i = 0;
//     int j = 0;
//     int o = 0;
//     int p = 0;
//     int a = 0;
//     int b = 0;
//     int count = check(mine,x,y);
//     show[x][y] = count + '0';
//     if(count == 0)
//     {
//         for(i=-row/4;i<=row/4;i++)
//         {
//             for(j=-col/4;j<=col/4;j++)
//             {
//                 o = x + i;
//                 p = y + j;
//                 count = check(mine,o,p);
//                 if(count == 0 && mine[o][p] == '0')
//                 {
//                     show[o][p] = count + '0';
//                     dround(mine,show,o,p);
//                     // int e = check(mine,o+1,p+1);
//                     // show[o+1][p+1] = e + '0';
//                     // e = check(mine,o-1,p-1);
//                     // show[o-1][p-1] = e + '0';
//                     // for(i=-1;i<=1;i++)
//                     // {
//                     //     for(j=-1;j<=1;j++)
//                     //     {
//                     //         a = o + i;
//                     //         b = p + j;
//                     //         count = check(mine,a,b);
//                     //         show[a][b] = count + '0';
//                     //     }
//                     // }
//                 }
//             }
//         }
//     }
// }
// void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
// {
//     int x = 0;
//     int y = 0;
//     int a = 0;
//     int b = 0;
//     int win = sum(show,ROW,COL);
//     while(win>minenum)
//     {
//         printf("请输入坐标:>");
//         scanf("%d,%d",&x,&y);
//         if(x>=1 && x<=row && y>=1 && y<=col)
//         {
//             if(mine[x][y]=='1')
//             {
//                 printf("你被炸死了...\n");
//                 displayboard(mine,row,col);
//                 break;
//             }
//             else
//             {
//                 circle(mine,show,x,y,row,col);
//                 displayboard(show,row,col);
//                 win = sum(show,ROW,COL);
//             }
//         }
//         else
//         {
//             printf("坐标输出错误，请重新输入!\n");
//         }
//     }
//     if(win == minenum)
//     {
//         printf("恭喜你，扫雷成功!\n");
//         displayboard(mine,row,col);
//     }
// }
// void game()
// {
//     char mine[ROWS][COLS] = { 0 };
//     char show[ROWS][COLS] = { 0 };
//     initboard(mine,ROWS,COLS,'0');
//     initboard(show,ROWS,COLS,'*');
//     displayboard(show,ROW,COL);
//     getmine(mine,ROW,COL);
//     //displayboard(mine,ROW,COL);
//     findmine(mine,show,ROW,COL);
// }
// void menu()
// {
//     printf("**********扫雷**********\n");
//     printf("***********************\n");
//     printf("*****1.play 0.exit*****\n");
//     printf("***********************\n");
// }
// void test()
// {
//     srand((unsigned int)time(NULL));
//     int input = 0;
//     do
//     {
//         menu();
//         scanf("%d",&input);
//         switch(input)
//         {
//             case 1:
//             game();
//             break;
//             case 0:
//             printf("退出游戏\n");
//             break;
//             default:
//             printf("输入错误，请重新输入!\n");
//             break;
//         }
//     }while(input);
// }
// int main()
// {
//     test();
//     return 0;
// }
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
//求英文字符大小
// #include<stdio.h>
// int main()
// {
//     printf("%lu\n",sizeof(char));
//     return 0;
// }