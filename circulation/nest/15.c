#include<stdio.h>
int main()
{
    int i,j,k,n;
    for(i=1;i<20;i++)
    for(j=1;j<33;j++)
    for(k=3;k<100;k=k+3)
    if(i+j+k==100 && 15*i+9*j+k==300)
    printf("cock=%d,hen=%d,chicken=%d\n",i,j,k);
    return 0;
}