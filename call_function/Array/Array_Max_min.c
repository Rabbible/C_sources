#include<stdio.h>
int max(int a[],int n);
int min(int a[],int n);
int main()
{
    int a[10],i,sum=0,j,k;
    double average;
    for(i=0;i<10;i++)
    {
        printf("Please enter a number and then press enter:\n");
        scanf("%d",&a[i]);
        sum+=a[i];
    }//连续输入10个值
    average=(double)sum/10;//求平均数
    j=max(a,10.0);
    k=min(a,10.0);
    printf("average=%lf,max=%d,min=%d",average,j,k);
    return 0;
}
int max(int a[],int n)//比较最大值
{
    int max,i;
    max=a[0];   //假设a[0]为最大值
    for(i=1;i<10;i++)
        if(max<=a[i])
          max=a[i];
    return max;
}
int min(int a[],int n)//比较最小值
{
    int min,i;
    min=a[0];   //假设a[0]为最小值
    for(i=1;i<10;i++)
        if(min>=a[i])
            min=a[i];
    return min;
}