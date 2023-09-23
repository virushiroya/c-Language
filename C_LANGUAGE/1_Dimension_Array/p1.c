/* Write 2 array with data only */

#include<stdio.h>

int main()
{

	int a[ ]={5,4,3,2,1};
	int b[ ]={1,2,3,4,5};
	int i,j;

	printf("Array 1 is :");

	for(i=0; i < 5; i++)
	{
		printf(" a[%d]\t",a[i]);
	}

	printf("\nArray 2 is :");

	for(j=0; j < 5; j++)
	{
		printf(" b[%d]\t",b[j]);
	}

	return 0;
}

/*

Array 1 is : a[5]        a[4]    a[3]    a[2]    a[1]
Array 2 is : b[1]        b[2]    b[3]    b[4]    b[5]

*/