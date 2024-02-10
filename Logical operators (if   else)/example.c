 /*


Logical operators :- && , || , !


  value		&&	 ||
		
   1 1		1	  1

   1 0		0	  1	
   
   0 1		0	  1

   0 0		0	  0


*/


#include<stdio.h>

int main ()

{
   int a=50, b=30, c=60;


      if(a>b && a>c)
      {
		printf("Ais big");
      }
     else if(! (b<c))
      {
       		printf("B is big");
      }
      else
      {
		
       		printf("C is big");
      }
    
    return 0;
}

/*	C is big	*/