/*

 1       1       2       3       5       8       13      21


*/

#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,n=1,a;

	while(i<=15)
	{
		a=n+i;
		printf(" %d\t",a);
		n=i;
		i=a;		
	}

	return 0;
}