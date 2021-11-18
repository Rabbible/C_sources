#include<stdio.h>
int main()
{
  int i,sum;
  sum = 0;
  for(i=1;i<=1000;i+=2)/*1000以内奇数 */
{ 
   sum=i+sum;/*1000以内奇数求和 */
}
printf("sum=%d\n",sum);
return 0;
}