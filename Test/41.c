/*************************************************************************
    > File Name: 3.c
    > Author: Elizerbs-Fire
    > 德丽莎宇宙第一可爱！ 
    > Created Time: 2019年07月09日 星期二 15时28分56秒
 ************************************************************************/

#include <stdio.h>
/*找出三个数的最大值*/
int main()
{
    int a,b,c,max;
    printf("Please enter three numbers a,b,c:");
        //输入三个要比较的数
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b)
    {
        max=b;
        if(b>c)
            max=b;
        else
            max=c;
    }
    else
    {
        max=a;
        if(a>c)
            max=a;
        else
            max=c;
    }//比较过程
    printf("max=%d\n",max);
//打印出三个数里面最大的那个数
    return 0;
}
