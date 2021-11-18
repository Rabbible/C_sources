#include <stdio.h>
int judge_prime(int n)// 排除质数的情况
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i>=n)
        return 1;
    else
		return 0;
}
// 大于2的偶数可写成两个质数和的形式 
int main()
{
    int n,i;
    printf("Please enter an even n:\n");
    // 请输入一个偶数
    scanf("%d",&n);
    for(i=3;i<n;i++)
    {
        if(judge_prime(i)==1&&i%2==1&&judge_prime(n-i)==1&&(n-i)%2==1)//排除掉不符合条件的情况
        {
            printf("%d=%d+%d\n",n,i,n-i);
            break;
        }
    }
    return 0; 
}