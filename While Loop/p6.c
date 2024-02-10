/*

   enter n print odd no, up to n


	Enter any odd value 1
	1, 3, 5, 7, 9, 11, 13, 15, 17, 19,
*/


#include<stdio.h>

int main()

{
	int a,n;

	printf("Enter any odd value ");
	scanf("%d",&n);
	
	a=n;
	while(a<=20)
	{
		printf("%d, ",a);
		a+=2;
	}
	return 0;
}