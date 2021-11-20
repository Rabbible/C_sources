#include<stdio.h>
// 函数声明
double max(double a,double b,double c);

int main()
{
    double i,j,k,Max;
    printf("Please enter three numbers:\n");
    scanf("%lf%lf%lf",&i,&j,&k);
    Max=max(i,j,k);
    printf("%lf",Max);
    return 0;
}

// 三个数的大小比较
double max(double a,double b,double c)
{
    if(a>=b&&a>=c)
    return a;
    if(a>=b&&a<=c)
    return c;
    if(a<=b&&b>=c)
    return b;
    if(a<=b&&b<=c)
    return c;
}