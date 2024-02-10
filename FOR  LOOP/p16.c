/* 1,2,4,6,8,16.....n */

#include<stdio.h>

int main()
{

	int a;

	for(a=1; a<=200; a*=2)
	{
		printf("%d\t",a);
	}

	return 0;
}

/*  1       2       4       8       16      32      64      128 */