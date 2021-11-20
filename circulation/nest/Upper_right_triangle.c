#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<i)
            {
                printf("\t");
            }
            else
            {
                printf("*\t");
            }
            // 右上半角三角形
        }printf("\n");
    }
    return 0;
}