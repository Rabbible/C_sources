#include<stdio.h>
//求质数
int Isprime(int m)
{
    int i;
    for(i=2;i<m;i++)
    if(m%i==0)
    break;
    if(i<m)
        return 0;
    else
        return 1;
}
int main()
{
    int n,x;
    printf("Please enter an even number:");//请输入一个偶数
    scanf("%d",&n);
    for(x=2;x<((n/2)+1);x++)
    {
        if(Isprime(x)==1&&Isprime(n-x)==1)
        printf("%4d%4d\n",x,n-x);//偶数由质数的可能组成
    }
    return 0;
}