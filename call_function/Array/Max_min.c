//头文件声明
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//函数声明
double average(int a[],int n);
int max(int a[],int n);
int min(int a[],int n);
//主函数
int main()
{
    int a[10],i,j,k;
    double m;
    srand((unsigned)time(NULL));
    //随机时间
    for(i=0;i<10;i++)
    {
        a[i]=rand()%100;
        printf("a[%d]=%d  ",i,a[i]);
    }
    printf("\n");
    //调用函数
    m=average(a,10);
    j=max(a,10);
    k=min(a,10);
    printf("average=%lf\nmax=%d\nmin=%d",m,j,k);
    return 0;
}
//求平均函数
double average(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
       sum+=a[i];
    }   
    return (double)sum/10;
}
// 求最大值函数
int max(int a[],int n)
{
    int max,i;
    max=a[0];
    for(i=1;i<10;i++)
    {
        if(max<=a[i])
       {
          max=a[i];
       }
    }
    return max;
}
// 求最小值函数
int min(int a[],int n)
{
    int min,i;
    min=a[0];
    for(i=1;i<10;i++)
        if(min>=a[i])
            min=a[i];
    return min;
} 