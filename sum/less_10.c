#include<stdio.h>
int main()
{
  int i,sum;
  printf("Please enter i which is  smaller than 10:");
  scanf("%d",&i);
  sum=0;
  while(i<=10)
 {
   sum=i+sum;
   i++;
 }/*计算比10小的数的和，起点由人为控制 */
printf("sum=%d\n",sum);
return 0;
}