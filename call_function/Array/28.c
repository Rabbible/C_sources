#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double average(int a[],int n);
int max(int a[],int n);
int min(int a[],int n);
int main()
{
    int a[10],i,j,k;
    double m;
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        a[i]=rand()%100;
        printf("a[%d]=%d  ",i,a[i]);
    }
    printf("\n");
    m=average(a,10);
    j=max(a,10);
    k=min(a,10);
    printf("average=%lf\nmax=%d\nmin=%d",m,j,k);
    return 0;
}
double average(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
       sum+=a[i];
    }   
    return (double)sum/10;
}
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
int min(int a[],int n)
{
    int min,i;
    min=a[0];
    for(i=1;i<10;i++)
        if(min>=a[i])
            min=a[i];
    return min;
} 