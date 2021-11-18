#include<stdio.h>
#define MAX(x,y) (x)>(y)?(x):(y)
int main()
{
    int a=5,b=2,c=3,d=3,t;
    t=MAX(a+b,c+d)*10;
    printf("%d\n",t);
    return 0;
}