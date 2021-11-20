#include<stdio.h>
int min(int a[],int n)//定义用于最小值筛选的函数
{
    int min,i;
    min=a[0];//假设第一个数为最小值
    for(i=1;i<20;i++)//因为a[20]中第一个为a[0]，所以第二个从1开始
        if(min>=a[i])//数组中剩余的数与之比较
            min=a[i];
    return min;
} 
int min2(int b[],int n)//定义用于最小值筛选的函数
{
    int min,i;
    min=b[0];//假设第一个数为最小值
    for(i=1;i<n;i++)//因为a[20]中第一个为a[0]，所以第二个从1开始
        if(min>=b[i])//数组中剩余的数与之比较
            min=b[i];
    return min;
} 
int max(int a[],int n)//定义用于最大值筛选的函数
{
    int max,i;
    max=a[0];//假设第一个数为最大值
    for(i=1;i<20;i++)//因为a[20]中第一个为a[0]，所以第二个从1开始
    {
        if(max<=a[i])//数组中剩余的数与之比较
       {
          max=a[i];
       }
    }
    return max;
}
int max2(int a[],int n)//定义用于最大值筛选的函数
{
    int max,i;
    max=a[0];//假设第一个数为最大值
    for(i=1;i<n;i++)//因为a[20]中第一个为a[0]，所以第二个从1开始
    {
        if(max<=a[i])//数组中剩余的数与之比较
       {
          max=a[i];
       }
    }
    return max;
}
int main()
{
    int a[20]={23,12,77,69,32,88,18,24,76,81,13,79,25,56,78,12,36,60,58,64};
    int i,j,k,count=0,m,l;
    int b[20],c[20],d[20];
    a[11]=70;//对79换值，这里取70吧
    for(i=0;i<20;i++)
    {
        printf("%-4d",a[i]);
    }//打印出新的a[20]数组看看怎么样
    printf("\n");//换行

    j=min(a,20);//调用函数
    printf("In a[20],the min one is:%d\n",j);

    k=max(a,20);//调用函数
    printf("In a[20],the max one is:%d\n",k);

    for(i=0;i<20;i++)
    {
        if(a[i]%3==0)//筛选所有能被3整除的数
        {
            b[count]=a[i];//重整b数组
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%-4d",b[i]);//调试，打印看看像什么样
    }
    printf("\n"); //换行 
    m=min2(b,count);
    printf("In a[20],the smallest number divisible by 3 is:%d\n",m);

    count=0;
    for(i=0;i<20;i++)
    {
        if(a[i]%2==0)
        {
            c[count]=a[i];
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%-4d",c[i]);//调试，打印看看像什么样
    }
    printf("\n");
    l=max2(c,count);
    printf("In a[20],the largest number of even numbers is:%d\n",l);

    count=0;
    for(i=0;i<20;i++)
    {
        if(a[i]<=50)
        {
            d[count]=a[i];
            count++;
        }
    }
    printf("In a[20],all numbers less than or equal to 50:\n");
    for(i=0;i<count;i++)
    {
        printf("%-4d",d[i]);
    }
    printf("\n");

    int e[20];
    int sum=0;
    count=0;
    printf("In a[20],ascending order of several:\n");
    for(i=0;i<20;i++)
    {
        if(a[i]/10 < a[i]%10)
        {
            e[count]=a[i];
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        sum+=e[i];
        printf("%-4d",e[i]);
    }
    printf("\n");
    printf("Sum of ascending numbers sum=%d\n",sum);

    int f[20];
    printf("An ascending number whose sum of the ones and tens places is greater than or equal to 5:\n");
    for(i=0;i<count;i++)
    {
        if(( e[i]/10 + e[i]%10 )>=5)
        {
            f[i]=e[i];
            printf("%-4d",f[i]);
        }
    }
    printf("\n");

    int Max,Min,mi1,mi2,ff,fk;
    Max=a[0];//假设第一个数为最大值
    for(i=1;i<20;i++)//因为a[20]中第一个为a[0]，所以第二个从1开始
    {
        if(Max<=a[i])//数组中剩余的数与之比较
       {
          Max=a[i];
          ff=i;
       }
    }
    mi1=a[19];
    a[19]=a[ff];
    a[ff]=mi1;
    Min=a[0];
    for(i=1;i<20;i++)//因为a[20]中第一个为a[0]，所以第二个从1开始
    {
        if(Min>=a[i])//数组中剩余的数与之比较
       {
          Min=a[i];
          fk=i;
       }
    }
    mi2=a[0];
    a[0]=a[fk];
    a[fk]=mi2;
    printf("The maximum value swaps with a[19],The minimum value swaps with a[0],after that,a[20]:\n");
    for(i=0;i<20;i++)
    {
        printf("%-4d",a[i]);
    }
    printf("\n");

    int x,y,z;//y保存找到的最小值下标
    int B[20];
    for(i=0;i<20;i++)//选择排序法
    {
        y=i;//所有找过的元素中，下标y元素是最小的
        for(x=i+1;x<20;x++)
        {
            if(a[x]<a[y])
            {
                y=x;
            }
        }
        z=a[y];
        a[y]=a[i];
        a[i]=z;
    }
    printf("a[20]Sort from low to high and assign values to B[20]:\n");
    for(i=0;i<20;i++)
    {
        B[i]=a[i];
        printf("%-4d",B[i]);
    }
    printf("\n");
    return 0;
}