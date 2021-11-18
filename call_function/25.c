#include<stdio.h>
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