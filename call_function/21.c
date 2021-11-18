#include<stdio.h>
#define N 10
void kbdinput(int a[],int n) 
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void reverse(int a[],int n)
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
}
void output(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%2d",a[i]);
}
int main()
{
	int n,s[N];
	printf("How many elements:");
	scanf("%d",&n);
	printf("Input elements:\n");
	kbdinput(s,n);
	reverse(s,n);
	printf("Output result:\n");
	output(s,n);
    return 0; 
}
