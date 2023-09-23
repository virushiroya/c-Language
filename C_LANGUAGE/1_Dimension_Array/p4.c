/*

given array odd - even position elements sum.


sum of odd nomber :100
sum of even nomber :90

*/

#include<stdio.h>

int main()
{
	
	int a[20]={1,2,3,4,5,6,7,8,9,10};
	int i;
	int even=0,odd=0;

	for(i=0; i < 20; i++)
	{
		if(i%2==0)
		{
			even+=i;
		}
		else
		{
			odd+=i;
		}
	}

	printf(" sum of odd nomber :%d\n",odd);

	printf("sum of even nomber :%d\n",even);

	return 0;
	
}