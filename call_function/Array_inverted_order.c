#include<stdio.h>
//宏定义
#define N 10
//函数声明
// 键盘输入
void kbdinput(int a[],int n) 
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
// 倒序
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
// 输出
void output(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
}

int main()
{
	int n,s[N];
	// N宏定义了所以为s[10],不能超出空间否则数据出错
	printf("How many elements just less 12:");
	// 多少个数要排序
	scanf("%d",&n);
	printf("Input elements:\n");
	kbdinput(s,n);
	reverse(s,n);
	printf("Output result:\n");
	output(s,n);
    return 0; 
}
