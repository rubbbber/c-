//搭积木
#include<stdio.h>
#include<string.h>
typedef struct WHERE
{
    int row;
    int col;
}W;
void initarr(char arr[25][25],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        arr[i][0] = i + '0';
    }
}
void getadd(char a,char ac[25][25],W*x,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        j = 0;
        while (ac[i][j] != 0)
        {
            if(ac[i][j] == a)
            {
                x->row = i;
                x->col = j;
                return;
            }
            j++;
        }
    }
}
void print(char arr[25][25],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("%d: ",i);
        j = 0;
        while (arr[i][j] != 0)
        {
            printf("%c ",arr[i][j]);
            j++;
        }
        printf("\n");
    }
}
int top(char arr[25][25],int row,int col)
{
    int i =1;
    while(arr[row][col+i] != 0)
    {
        i++;
    }
    return col+i;
}
void recovery(char arr[25][25],int row,int col)
{
    int i = 1;
    while(arr[row][col+i] != 0)
    {
        if(arr[arr[row][col+i]-'0'][0] != 0)
        {
            recovery(arr,arr[row][col+i]-'0',0);
        }
        arr[arr[row][col+i]-'0'][0] = arr[row][col+i];
        arr[row][col+i] = 0;
        i++;
    }
}
int main()
{
    int n,l,i;W A;W B;
    W*w1 = &A;
    W*w2 = &B;
    char arr[25][25] = {0};
    char*fwd,*bwd,*ch1,*ch2;char con[20];
    char a,b,tmp;
    char(*pa)[25] = arr;
    scanf("%d\n",&n);
    initarr(arr,n);
    while(1)
    {
        ch1 = NULL;
        ch2 = NULL;
        fgets(con,20,stdin);
        fwd = strtok(con," ");
        if(strcmp(fwd,"q\n")==0)
        {
            break;
        }
        ch1 = strtok(NULL," ");
        bwd = strtok(NULL," ");
        ch2 = strtok(NULL," \n");
        a = ch1[0];
        b = ch2[0];
        getadd(a,arr,w1,n);
        getadd(b,arr,w2,n);
        if (a == b||w1->row == w2->row)
        {
            continue;
        }
        if(strcmp(fwd,"mv")==0)
        {
            if(strcmp(bwd,"on")==0)
            {
                recovery(arr,w1->row,w1->col);
                recovery(arr,w2->row,w2->col);
                getadd(a,arr,w1,n);
                getadd(b,arr,w2,n);
                arr[w2->row][w2->col+1] = arr[w1->row][w1->col];
                arr[w1->row][w1->col] = 0;
            }
            else if(strcmp(bwd,"ov")==0)
            {
                recovery(arr,w1->row,w1->col);
                getadd(a,arr,w1,n);
                l = top(arr,w2->row,w2->col);
                arr[w2->row][l] = arr[w1->row][w1->col];
                arr[w1->row][w1->col] = 0;
            }
        }
        else if(strcmp(fwd,"st")==0)
        {
            if(strcmp(bwd,"on")==0)
            {
                recovery(arr,w2->row,w2->col);
                getadd(b,arr,w2,n);
                l = top(arr,w1->row,w1->col);
                for(i=0;i<l-w1->col;i++)
                {
                    arr[w2->row][w2->col+i+1] = arr[w1->row][w1->col+i];
                    arr[w1->row][w1->col+i] = 0;
                }
            }
            else if(strcmp(bwd,"ov")==0)
            {
                i = 0;
                l = top(arr,w2->row,w2->col);
                while(arr[w1->row][w1->col+i]!=0)
                {
                    arr[w2->row][l+i] = arr[w1->row][w1->col+i];
                    arr[w1->row][w1->col+i] = 0;
                    i++;
                }
            }
        }
        else if(strcmp(fwd,"xh")==0)
        {
            i = 0;
            while (arr[w1->row][i] != 0||arr[w2->row][i] != 0)
            {
                tmp = arr[w1->row][i];
                arr[w1->row][i] = arr[w2->row][i];
                arr[w2->row][i] = tmp;
                i++;
            }
        }
    }
    print(arr,n);
}                                               
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
//序列(找规律法)质因数仅为2，3，5的数组成一个序列1，2，3，4，5，6，8，9.....
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