#include<stdio.h>
double max(double a,double b,double c);
int main()
{
    double i,j,k,Max;
    printf("Please enter three numbers:");
    scanf("%lf,%lf,%lf",&i,&j,&k);
    Max=max(i,j,k);
    printf("%lf",Max);
    return 0;
}
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