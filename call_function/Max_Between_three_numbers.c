#include<stdio.h>
// 两数最大值函数
double max(double x,double y)
{
    double z;
    z=x>y?x:y;
    return z;
}
int main()
{
    double a,b,c,d;
    printf("Please enter three numbers:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=max(a,max(b,c));
    // 嵌套
    printf("max=%lf\n",d);
    return 0;
}