//序列
#include<stdio.h>
#include<stdlib.h>
void bubble_sort(unsigned long long arr[],int sz)
{
    int i = 0;
    int flag = 1;
    for(i=0;i<sz-1;i++)
    {
        int j = 0;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                unsigned long long tmp = 0;
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
                flag = 0; 
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
}
int main()
{
    int a = 0,c = 0;
    unsigned long long arr[30000] = {0};
    unsigned long long x,y,z,sum=1,sum2=1,sum3=1;
    unsigned long long j=2,k=3,l=5;
    for(x=0;x<64;x++)
    {
        j = 2;
        if(x == 0)
        {
            j = 1;
        }
        sum *= j;
        sum3 = sum;
        for(y=0;y<41;y++)
        {
            k = 3;
            if(y == 0)
            {
                k = 1;
            }
            sum *= k;
            sum2 = sum;
            if(sum >1999999999999999999)
            {
                break;
            }
            for(z=0;z<25;z++)
            {
                l = 5;
                if(z == 0)
                {
                    l = 1;
                }
                sum *= l;
                if(sum >1999999999999999999)
                {
                    break;
                }
                else
                {
                    arr[c] = sum;
                    c++;
                }
            }
            sum = sum2;
        }
        sum = sum3;
    }
    bubble_sort(arr,c);
    while(scanf("%d",&a)!=EOF)
    {
        printf("%lld\n",arr[a-1]);
    }
}