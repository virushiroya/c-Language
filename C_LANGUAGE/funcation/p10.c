/*
    Enter Any Nomber :15
    its divisible by 5 and 3

    Enter Any Nomber :20
    its not divisible by 5 and 3
*/
#include<stdio.h>
 
 void IFfunction()
 {
       int a;
    
	printf("Enter Any Nomber :");
	scanf("%d",&a);

	if(a%15==0)
	{
		printf("its divisible by 5 and 3");
	}
	else
	{
		printf("its not divisible by 5 and 3");
	}

 }
int main()
{
    IFfunction();

    return 0;
}