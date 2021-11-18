#include<stdio.h>
int main()
{
  int i,sum=0;
  i=1;
   do
  { 
   sum=i+sum;
   i+=2;
  }while(i<=1000);/*1000以内的奇数和 */
printf("sum=%d\n",sum);
return 0;
}