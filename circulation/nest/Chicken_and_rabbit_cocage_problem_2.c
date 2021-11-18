#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<20;i++)
      for(j=1;j<33;j++)
        if(100-i-j==300-15*i-9*j&&k%3==0)
        {
          k=100-i-j;
          printf("cock=%d,hen=%d,chicken=%d\n",i,j,k);
        }
// Chicken_and_rabbit_cocage_problem
    return 0;
}