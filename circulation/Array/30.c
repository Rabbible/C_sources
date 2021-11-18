#include<stdio.h>
int main()
{
    int i,a[50],count=0;
    for(i=1;i<100;i++)
    {
        if(i%7==0||i%11==0)
        {
            a[i]=i;
            count ++;
            printf("a[%d]=%d  ",count,a[i]);
            if(count%8==0)
              printf("\n");
        }
    }
    printf("\ncount=%d",count);
    return 0;
}