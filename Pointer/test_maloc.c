#include<stdlib.h>
#include<stdio.h>
int main(void){
    void *p,*q,*w,*e;
    p = malloc(1);
    q = malloc(1);
    w = malloc(1);
    e = malloc(1);
    printf("%p\n",p);
    printf("%p\n",q);
    printf("%p\n",w);
    printf("%p\n",e);
    free(p);
    free(q);
    free(w);
    free(e);
    return 0;
}