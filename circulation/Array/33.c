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
        printf("a[%d]=%d\t",i,a[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        if(i<5)
        {
            t=a[i];
            a[i]=a[9-i];
            a[9-i]=t;
            printf("a[%d]=%d\t",i,a[i]);
        }
        if(i>=5&&i<10)
        {
            a[9-i]=a[i];
            printf("a[%d]=%d\t",i,a[9-i]);
        }
    }
    return 0;
}
