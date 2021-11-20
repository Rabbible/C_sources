#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,a[10],j,p,t;
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        a[i]=rand()%100+1;
    }
    for(i=0;i<9;i++)
    {
        p=i;
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[p])
            {
               p=j;
            }
        }
        t=a[p];
        a[p]=a[i];
        a[i]=t;
    }
    for(i=0;i<10;i++)
    printf("a[%d]=%d\t",i,a[i]);
    printf("\n");
    return 0;
}//随机数从小到大排列