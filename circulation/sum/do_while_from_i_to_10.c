#include<stdio.h>
int main()
{
  int i,sum;
  printf("Please enter i:");
  scanf("%d",&i);
  sum=0;
  do
 {
   sum=i+sum;
   i++;
 }while(i<11);
//求i到10的和，大于10则输出输入值
if(i<=11)
  printf("sum=%d\n",sum);
else
  printf("What i putin:%d\n",sum);
return 0;
}