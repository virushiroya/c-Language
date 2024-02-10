/*

Enter a :10
1       4       3       16      5       36      7       64     100

*/

#include<stdio.h>
#include<conio.h>

int main()
{


        int a=1,b;
		
        printf("Enter a :");
	scanf("%d",&b);

	while(a<=b)
	{
	   if(a%2==1)
	   {
		printf("%d\t",a);
	   }	
	   else
	   {
		printf("%d\t",a*a);
	   }	
		a++;	
      
	}

	return 0;

}