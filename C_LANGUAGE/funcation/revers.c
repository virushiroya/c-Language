/*
 enter Number:12345
 Revers is : 54321

*/

#include<stdio.h>
int add(int Number)
{
	int i,rev=0,a;

	while(Number !=0)
	{
		a=Number%10;
		rev=rev*10+a;
		Number=Number/10;
	}
	printf(" Revers is : %d",rev);
}
int main()
{
	int num,a;

	printf("enter Number:");
	scanf("%d",&num);

	a=add(num);

	return a;

}