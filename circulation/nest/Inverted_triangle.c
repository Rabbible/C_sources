#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=10;i>=1;i--)
    {
        for(j=1;j<=10-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    // 倒置三角形
    return 0;
}