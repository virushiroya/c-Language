
/*  Enter one value find its divisible by 5 or  not */

#include<stdio.h>
int main()
{
	int a;

	printf("enter A:");
	scanf("%d",&a);
       

	if(a%5==0)
	{
		printf("its dision by 5");
	}
	else
	{
		printf("its not divison by 5");
	}
	

	return 0;
}

/*

enter A:70
its dision by 5

enter A:13
its not divison by 5

*/