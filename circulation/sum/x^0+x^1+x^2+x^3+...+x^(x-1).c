#include<stdio.h>
#include<math.h>
int main()
{
    long x,i,j,sum;
    printf("Please enter x:");
    scanf("%d",&x);
    sum=0;
    for(i=0;i<x;i++)
    {
        j=pow(x,i);
        sum=sum+j;
    }//x^0+x^1+x^2+x^3+...+x^(x-1)=
    printf("sum=%d",sum);
    return 0;
}