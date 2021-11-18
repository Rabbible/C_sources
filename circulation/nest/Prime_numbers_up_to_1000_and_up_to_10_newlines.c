#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,count=0;
    for(i=2;i<1000;i++)
    {
        k=sqrt(i);
        j=2;
        while(j<=k)
        {
            if(i%j==0)
                break;
            j++;
        }
        if(j>=k+1)
        {
            count++;
            printf("%4d",i);
            if(count%10==0)
                printf("\n");
        }
    }
    // Prime_numbers_up_to_1000_and_up_to_10_newlines
    return 0;
}