/*

1,2,3,4,5,6,7,8,9,10,
the sum is : 55

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a=1,sum=0;

	while(a<=10)
	{
		sum=sum+a;
		printf("%d,",a);
		a++;
	}
	
	printf("\nthe sum is : %d\n",sum);

	return 0;
}