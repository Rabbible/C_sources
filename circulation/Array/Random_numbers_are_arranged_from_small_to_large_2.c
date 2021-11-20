#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,a[10],j,t;
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        a[i]=rand()%100+1;
    }
    for(i=9;i>=1;i--)
    {
        for(j=0;j<i;j++)
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    for(i=0;i<10;i++)
    printf("a[%d]=%d\t",i,a[i]);
    printf("\n");
    return 0;
}//随机数从小到大排列