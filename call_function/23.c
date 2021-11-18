#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prove(int ex)
{
    int i;

    if(0 == ex || 1 == ex)
    {
        return 0;
    }
    for (i = 2; i <= (int)(sqrt(ex)); i++)
    {
        if(0 == ex % i)
        {
            return 0;
        }
    }
    return 1;
}/* 判断一个数是否为素数，根据初等数论，对于一个大于2的自然数，只要它不能被2到根号N之间的整数整除时，N就是一个素数 */

int main()
{
    int i, q, p;

    for(i = 4; i <= 200; i += 2)                      //遍历从4到200的所有偶数
    {
        for (q = 2; q <= ((i / 2) + 1); q++)          //因为最小的素数是2，所以从2开始尝试用素数的和表示偶数
        {
            p = i - q;
            if(prove(p) && prove(q))
            {
                printf("%d = %d + %d\n",i,q,p);
                break;
            }
        }
    }
    return 0;
}