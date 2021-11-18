#include <stdio.h>
double fact(int m);

int main(void)
{
    int n;
    double f;
    printf("Input n: ");
    scanf("%d", &n);
    f = fact(n);        
    printf("%d!=%f\n", n, f);
    return 0;         
}

double fact(int m)
{
    int i;
    double product=1;
    for ( i = 1; i <= m; i++ )
    product = product * i;
    return product;   
}