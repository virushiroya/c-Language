/*

   enter n print even no, up to n

    Enter any even value 0
    0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20,    

*/

#include<stdio.h>

int main()

{
	int a,n;

	printf("Enter any even value ");
	scanf("%d",&n);
	
	a=n;
	while(a<=20)
	{
		printf("%d, ",a);
		a+=2;
	}
	return 0;
}