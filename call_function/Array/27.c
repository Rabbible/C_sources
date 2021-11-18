#include<stdio.h>
int max(int a[],int n);
int min(int a[],int n);
int main()
{
    int a[10],i,sum=0,j,k;
    double average;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    average=(double)sum/10;
    j=max(a,10.0);
    k=min(a,10.0);
    printf("average=%lf,max=%d,min=%d",average,j,k);
    return 0;
}
int max(int a[],int n)
{
    int max,i;
    max=a[0];
    for(i=1;i<10;i++)
        if(max<=a[i])
          max=a[i];
    return max;
}
int min(int a[],int n)
{
    int min,i;
    min=a[0];
    for(i=1;i<10;i++)
        if(min>=a[i])
            min=a[i];
    return min;
}