/*

----->  unary operator ( ++ , --)

----->  pre           post
    
        a++;	      a--;
       a= a+1;	      a= a-1; 	



----> for:-
 
------>  syntax :


    for(exp 1; exp 2; exp 3)
    {
	//continue statement
    }
	 
---->  exp 1 = initilization [ call only one time ] 

---->  exp 2 = condition [ call every time when loop enter]

---->  exp 3 = inc/dec [ call every time when loop exit]
    
*/

#include<stdio.h>
 int main()

{
  int a;

        for(a=5; a<=5; a++)
	{
		printf(" a :%d\n",a);
	}

		printf(" a :%d",a);

   return 0;
}


