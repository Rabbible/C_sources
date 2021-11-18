#include<stdio.h>
int main()
{
  int i,sum=0;
  i=1;
  while(i<=1000)
{ 
   sum=i+sum;
   i+=2;
}/*1000以内奇数和 */
printf("sum=%d\n",sum);
return 0;
}