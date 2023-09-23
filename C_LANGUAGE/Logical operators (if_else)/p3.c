/* An electricity board charges the following rates to domestic users to discourage large consumption of energy For the first 100 units 60P per unit For the next 200 units 80P per unit Beyond 300 units 90P per unit All users are charged a minimum of Rs. 50. If the total amount is more than 300.00 then an additional surcharge of 15% is added. */

#include<stdio.h>

int main()

{

  int unit,total;

  printf("Enter unit :");
  scanf("%d",&unit);


	if(unit>=0 && unit<=100)
	{
		total=(unit*0.6)+50;
	}
	else if (unit>=100 && unit<=300)
	{	
		total = 60 +(unit-100)*0.8 + 50;
	}
	else if(unit >= 300 )
	{
		total= 60 + 160 + (unit - 300)*0.9 + 50;
 
	}
        if(total>=300)
        {
		total= total + total * 0.15;
		printf("total is : %d",total);
	}
	else
	{
		printf("total is : %d",total);
	}

	return 0;

}

/*
	Enter unit :600
        total is : 620

	Enter unit :100
        total is : 109

*/