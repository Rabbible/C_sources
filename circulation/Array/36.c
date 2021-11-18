#include <stdio.h>

int main( )

{ 

	int a[]={2,4,6,8,10};

	int y=1,x,*p;

	p=&a[1];

	for(x=0;x<3;x++)

		y+=*(p+x);

	printf("%d\n",y);
    return 0;
}