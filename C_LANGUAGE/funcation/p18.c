/*
 1       1       2       3       5       8       13      21
*/
#include<stdio.h>

void Whileloop()
{
     int i=0,n=1,a;

	while(i<=15)
	{
		a=n+i;
		printf(" %d\t",a);
		n=i;
		i=a;		
	}
}

int main()
{
    Whileloop();

    return 0;
}