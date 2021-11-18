#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            k=i*j;
            // 九九乘法表
            printf("%3d*%d=%-3d",i,j,k);
        }printf("\n");
    }
    return 0;
}