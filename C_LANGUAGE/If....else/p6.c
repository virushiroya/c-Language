/* Enter year find its leap year or note */

#include<stdio.h>

int main()

{
   int a;
   
   printf("Enter Any year : ");
   scanf("%d",&a);

   if(a%4==0)
   {
  	printf(" leap year");
   }
   else
   {
    	printf("not leap year");
   }

	return 0;

}

/*

	Enter Any year : 2024
 	leap year

	Enter Any year : 2022
	not leap year
*/