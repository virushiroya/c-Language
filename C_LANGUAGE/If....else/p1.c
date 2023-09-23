/*---->  Enter two value find smallest  */


#include<stdio.h>

int main()
{
    
	int a,b;

	printf("enter A:");
	scanf("%d",&a);

	printf("enter B:");
	scanf("%d",&b);

	if(a < b)

	{
		printf(" A  Is Small Nomber  : ");
	}
	else
	{
		printf(" A Is Big Nomber  Is : ");
	}
	

       return 0;
}

/*

----> output


enter A:100
enter B:20
 A Is Big Nomber  Is :


enter A:30
enter B:50
 A  Is Small Nomber  :

*/