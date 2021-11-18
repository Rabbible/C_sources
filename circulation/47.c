#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i,x;
    srand((unsigned)time(NULL));
    for(i=0;i<7;i++)
    {
    x=rand()%7;
    printf("x=%d\n",x);
    }
    return 0;
}