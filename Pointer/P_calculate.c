#include<stdio.h>
int main(){
    int a[] = {1,2,3,4,5,};
    int *p = a;
    int *q = &a[5];
    printf("%p\n",q);
    printf("%p\n",p);
    printf("%d\n", q-p);
}
/* &a[5] is a[6],which is not in a[],q-p 是进行地址的计算，
即a[6]的地址和a[0]的地址进行计算，
a[]并未定义元素个数所以继续往后退地址
(4*6-1*4)/4(int)=5 */