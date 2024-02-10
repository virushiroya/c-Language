/* C program to chek whether a person is eligible for voting or not */

#include<stdio.h>

int main()
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

	return 0;
}

/*

Enter your Age :20
eligible for voting

Enter your Age :17
 not eligible for voting

*/