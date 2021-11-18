#include<stdio.h>
#include<math.h>
int main()
{
    long a,i,j,sum;
    printf("Please enter a:");
    scanf("%d",&a);
    sum=0;
    j=a;
    for(i=0;i<a;i++)
    {
        sum=sum+a;
        a=a*10+j;
    }
    printf("a+aa+aaa+....=%d",sum);
    return 0;
}