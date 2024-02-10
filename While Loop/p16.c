/*

1       2       4       8       16      32      64    128

*/

#include<stdio.h>
#include<conio.h>

int main()
{

   int a=1;

   while(a<=200)
   {
     printf("%d\t",a);
     a*=2;
   }	
     
   return 0;
}

