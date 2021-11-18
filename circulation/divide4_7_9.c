#include<stdio.h>
int main()
{
  int n;
  for(n=101;n>100&&n<200;n++)
  if(n%4==2 && n%7==3 && n%9==5)
  {
    printf("%d\n",n);/*100到200之间除以4余二除以7余三除以9余五的数 */
  }
  return 0;
}