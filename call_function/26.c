#include<stdio.h>
double max(double x,double y)
{
    double z;
    z=x>y?x:y;
    return z;
}
int main()
{
    double a,b,c,d;
    printf("Please enter three numbers:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    d=max(a,max(b,c));
    printf("max=%lf\n",d);
    return 0;
}