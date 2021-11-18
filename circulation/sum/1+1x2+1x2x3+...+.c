#include<stdio.h>
int main(void)
{
	long int i,j,s,n;
	printf("Please enter n:");
	scanf("%ld",&n);
	j=1;
	s=0;
	for(i=1;i<=n;i++)
	{
		j=j*i;
		s=s+j;
	}//1+1*2+1*2*3+1*2*3*4+...+1*2*3*...*(n-1)n=
	printf("s=%ld\n",s);
	return 0;
 } 