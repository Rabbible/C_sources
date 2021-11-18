#include<stdio.h>
#define B_MAX 6 

int main()
{
	int i,k,w;
	int b[B_MAX];
	int count=0;
	int tmp;
	
	for(i=0;i<B_MAX;i++)
	{
		b[i]=0;
	}
	
	for(i=0;i<B_MAX;i++)
	{
		printf("输入：");
		scanf("%d",&tmp);
	    if(count==0)
     	{
	    	b[count]=tmp;
	    	count++;
	    	continue;
    	}
    	for(k=0;k<count;k++)
    	{
    		if(tmp>b[k])
    		{
    			printf("继续向后找：\n"); 
			}
			if(k==count-1)
			{
				b[count]=tmp;
				count++;
				break;
			}
			if(tmp<=b[k])
			{
				printf("\nzhaodaole gaiweizhi");
				w=k;
				for(w==count-1;w>=k;w--)
				{
					b[w+1]=b[w];
				}
				b[w]=tmp;
				count++;
			}
		}
		for(w=0;w<count;w++)
		{
		printf("  b[%d]=%d  ",w,b[w]);	
		}
	}
	printf("\n");
	for(i=0;i<B_MAX;i++)
	{
		printf("  b[%d]=%d  ",b[i],i);
	}
	printf("\n");
	
}