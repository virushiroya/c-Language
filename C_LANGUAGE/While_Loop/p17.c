/*

1       4       12      32      80      192     448   1024
*/

#include<stdio.h>
#include<conio.h>

int main()

{

   int a=1,b=1;

   while(a<=200)
   {
     printf("%d\t",a*b);
     a*=2;
     b++;	
   }	
     
   return 0;
	
}