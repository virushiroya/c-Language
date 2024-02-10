/* 1,4,3,16,5,.....n */

#include<stdio.h>

int main()

{
	int a,b;

	printf("Enter a :");
	scanf("%d",&b);

	for(a=1; a<=b; a++)
	{
	   if(a%2==1)
	   {
		printf("%d\t",a);
	   }	
	   else
	   {
		printf("%d\t",a*a);
	   }		
      
	}

	return 0;

}

/*
Enter a :20
1       4       3       16      5       36      7       64 100      11      144     13      196     15      256     17 324      19      400

*/