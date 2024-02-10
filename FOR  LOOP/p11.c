/*  Total 1,2,....10 = 55 */

#include<stdio.h>

int main()

{
   int a, sum=0;

	printf("first 10 nomber is :");

	for(a=1; a<=10; a++)
	{
		sum=sum+a;
		printf("%d, ",a);
	}

	printf("\n the sum is : %d\n",sum);


	return 0;
}

/*

first 10 nomber is :1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
 the sum is : 55

*/