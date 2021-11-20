#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=10-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=2*i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    // 正置三角形
    return 0;
}