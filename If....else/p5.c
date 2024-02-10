/* Enter student marks wheather pass or not */

#include<stdio.h>

int main ()

{
  int eng,guj,eco,Total,persentage;

       printf("Enter your eng marks :");
       scanf("%d",&eng);
       printf("Enter your guj marks :");
       scanf("%d",&guj);
       printf("Enter your eco marks :");
       scanf("%d",&eco);
       Total=eng+guj+eco;
       printf("Total marks is :%d\n",Total);
       persentage=(Total*100)/300;
       printf("persentage is :%d\n",persentage);

 	if(persentage > 33)
	{
		printf("student is pass");
	}
	else
	{
		printf("student is fail");
	}

	return 0;
}

/*

	Enter your eng marks :30
	Enter your guj marks :20
	Enter your eco marks :26
	Total marks is :76
	persentage is :25
	student is fail

        Enter your eng marks :90
	Enter your guj marks :95
	Enter your eco marks :93
	Total marks is :278
	persentage is :92
	student is pass
	
*/
