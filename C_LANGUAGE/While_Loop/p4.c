/*
  enter n print n to 1

10, 9, 8, 7, 6, 5, 4, 3, 2, 1,

*/

#include<stdio.h>

int main()

{
	int a,n;

	printf("Enter any value ");
	scanf("%d",&n);
	
	a=n;
	while(a>=1)
	{
		printf("%d, ",a);
		a--;
	}
	return 0;
}