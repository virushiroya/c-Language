//using function  calling array

#include<stdio.h>

int array()

{
	int a[10],i,sum=0;

	for(i=0; i < 10; i++)
	{

		printf("enter value [%d] : ",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0; i < 10; i++)
	{
		sum+=a[i];
	}

	printf("sum is : %d ", sum);

	return 0;
}
int main()
{
    array();
}