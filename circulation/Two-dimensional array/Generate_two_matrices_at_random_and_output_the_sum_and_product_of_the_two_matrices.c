//随机生成两个矩阵，编写程序输出两个矩阵的和与积。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[3][3], i,j,b[3][3],s[3][3],f[3][3];
    srand((unsigned)time(NULL));
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=rand()%100+1;
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    // 随机生成a矩阵
    printf("******************\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=rand()%100+1;
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    // 随机生成b矩阵
    printf("&&&&&&&&&&&&&&&&&&\n");
    printf("s[3][3]=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
            printf("%4d",s[i][j]);
        }
        printf("\n");
    }
    // 矩阵求和
    printf("&&&&&&&&&&&&&&&&&&\n");
    printf("f[3][3]=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            f[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
            printf("%6d",f[i][j]);
        }
        printf("\n");
    }
    // 矩阵的积
    return 0;
}