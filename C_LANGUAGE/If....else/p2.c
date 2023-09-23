/*  Enter one value find its positive or negative */

#include<stdio.h>

int main()

{
   float a;

   printf("Enter positive or negative value :");
   scanf("%d",&a);

   	if(a>0)
	{
 		printf(" its a positive value");
	}
	else
	{
	 	printf(" its a negative value");	
	}

  return 0;

}

/*

 Enter positive or negative value :-3
 its a negative value

Enter positive or negative value :5
 its a positive value
  
*/