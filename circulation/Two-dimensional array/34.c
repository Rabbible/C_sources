#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j,a[3][3],sum=0;
    srand((unsigned)time(NULL));
    for(i=0;i<3;i++)
    {
          for(j=0;j<3;j++)
        {
            a[i][j]=rand()%100+1;
            printf("%d\t",a[i][j]);
            if(i==j)
            sum+=a[i][j];
        }
        printf("\n");
    }
    printf("sum=%d\n",sum);
    return 0;
}