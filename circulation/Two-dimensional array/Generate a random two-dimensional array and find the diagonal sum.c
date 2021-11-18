#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j,a[3][3],sum=0;
    srand((unsigned)time(NULL));
    for(i=0;i<3;i++)// 行循环
    {
          for(j=0;j<3;j++)// 列循环
        {
            a[i][j]=rand()%100+1;
            // 随机赋值给二维数组a
            printf("%d\t",a[i][j]);
            if(i==j)
            // 行列下标相等时求和，即对角线和
            sum+=a[i][j];
        }
        printf("\n");
    }
    printf("sum=%d\n",sum);
    return 0;
}