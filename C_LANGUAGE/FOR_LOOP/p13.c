/* Total even 2,4,6 */


#include<stdio.h>

int main()

{
        int a;


	printf("Enter one even Nomber :");
	scanf("%d",&a);

	for(a=0; a<=7; a+=2)
	{
		printf("Nomber is : %d\n",a);
	}

	return 0;
}

/*

Enter one even Nomber :2
Nomber is : 0
Nomber is : 2
Nomber is : 4
Nomber is : 6

*/