#include<stdio.h>
// 判断是否为质数
int Isprime(int m)
{
    int i;
    for(i=2;i<m;i++) 
    if(m%i==0)
    break;
    if(i>=m)
    return 1;
    else
    return 0;
}

// 1000以内所有质数的和
int main()
{
    int sum,i;
    sum=0;
    for(i=2;i<1000;i++)
    {
        if(Isprime(i)==1)
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}