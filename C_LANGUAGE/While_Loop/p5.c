/*
  enter n print -n to n


	-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5,

*/

#include<stdio.h>

int main()

{
	int a,n;

	printf("Enter any value ");
	scanf("%d",&n);
	
	a=-n;
	while(a<=n)
	{
		printf("%d, ",a);
		a++;
	}
	return 0;
}