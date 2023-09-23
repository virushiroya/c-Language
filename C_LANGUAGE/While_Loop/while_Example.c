/*
------> while:

-----> syntax:

	while(condition)

	{
		// statement
	}




  ----> do___while :

 ---->  syntex :

	do
	{
 	    //statement
	}
	while(condition)
	

 


*/

#include<stdio.h>

int main ()
{
 int i=1,j=1;

   while(i<=5)
   {
	while(j<=5)
	{
		printf("%d ",j);
		j++;
	}
	i++;
   }		
     
  return 0;
}