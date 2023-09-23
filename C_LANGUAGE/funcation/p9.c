/*
    Enter Any year : 2023
    not leap year

    Enter Any year : 2024
     leap year
*/

#include<stdio.h>

void IFfunction()

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

}

int main()
{
    IFfunction();

    return 0;
}