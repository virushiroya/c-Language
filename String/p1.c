/*
String Length Counting.

Enter value: Dikshita
char is : D
char is : i
char is : k
char is : s
char is : h
char is : i
char is : t
char is : a
Length is : 8

*/

#include<stdio.h>

int main()
{

  char str[20];

  int i;

  printf("Enter value: ");
  scanf("%[^\n]s",&str);

	for(i=0; str[i]!='\0'; i++)
	{
		printf("char is : %c\n",str[i]);
	}
	
	printf("Length is : %d",i);

  return 0;

}