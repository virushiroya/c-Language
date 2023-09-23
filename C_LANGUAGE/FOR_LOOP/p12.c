/*  Total odd 1,3,5 */

#include<stdio.h>

int main()

{
    int a;


	printf("Enter one odd Nomber :");
	scanf("%d",&a);

	for(a=1; a<=5; a+=2)
	{
		printf("Nomber is : %d\n",a);
	}

	return 0;
}
/*

Enter one odd Nomber :1
Nomber is : 1
Nomber is : 3
Nomber is : 5


*/