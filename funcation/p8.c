/*
    Enter your Age :20
    eligible for voting

    Enter your Age :15
    not eligible for voting
*/
#include<stdio.h>

void IFfunction()
{

   int age;

   printf("Enter your Age :");
   scanf("%d",&age);

   	if(age>18)
	{
		printf("eligible for voting");
	}
	else
	{
		printf(" not eligible for voting");	
	}

	
}

int main()
{
    IFfunction();

    return 0;
}

