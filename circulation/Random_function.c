#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// 头文件声明
int main(){
    int i,x;
    srand((unsigned)time(NULL));
    // 随机函数
    for(i=0;i<7;i++)
    {
    x=rand()%7;
    // 随机数与7求余并把值赋给x
    printf("x=%d\n",x);
    }
    return 0;
}