/* 1,4,12,32,80,.....n */

#include<stdio.h>

int main()
{

	int a,b=1;

	for(a=1; a<=200; a*=2)
	{
		printf("%d\t",a*b);
		b++;
	}

	return 0;
}

/*  1       4       12      32      80      192     448     1024 */