/*
 enter n print 1 to n 


	Enter any value 10
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
*/

#include<stdio.h>

int main()

{
	int a,n;

	printf("Enter any value ");
	scanf("%d",&n);
	
	a=1;
	while(a<=n)
	{
		printf("%d, ",a);
		a++;
	}
	return 0;
}