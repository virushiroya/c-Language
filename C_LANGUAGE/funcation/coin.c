#include<stdio.h>
int add(int amount)
{
	int a[]={2000,500,200,100,50,20,10,5,2,1},i,p;

	for(i=0; i<10; i++)
	{
		if(amount>=a[i])
		{
			p=amount/a[i];
			printf("\n%d - %d",a[i],p);
			amount=amount%a[i];
		}
	}
}
int main()
{
	int a[]={2000,500,200,100,50,20,10,5,2,1},i,amount,p;
	printf("enter amount:");
	scanf("%d",&amount);
	add(amount);
}