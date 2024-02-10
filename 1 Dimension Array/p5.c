/* given array totel element sum 

enter value [1] : 1
enter value [2] : 2
enter value [3] : 3
enter value [4] : 4
enter value [5] : 5
enter value [6] : 6
enter value [7] : 7
enter value [8] : 8
enter value [9] : 9
enter value [10] : 10
sum is : 55

 */


#include<stdio.h>

int main()

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