#include<stdio.h>

int main()
{

  int a=10;
  int b;
  b=50;

       printf("Ans 1 : %d\n",b);

  b=a;
  b=a+a;
  b=b+50;

       printf("Ans 2 : %d\n",a+50+b);
  
       printf("Ans 3 : %d\n",b+a); 

    return 0;
}



/*

Ans 1: 50

Ans 2: 10 + 50 + (20 + 50) = 130

Ans 3: 70 + 10 = 80


*/