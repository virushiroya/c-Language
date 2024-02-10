/*
A :B :C :D :E :F :G :H :I :J :K :L :M :N :O :P :Q :R :S :T :U :V :W :X :Y :Z :
*/
#include<stdio.h>

void Forloop()
{
     char a;

	for(a='A'; a<='Z'; ++a)
	{
		printf("%c :",a);
	}
}
int main()
{
    Forloop();

    return 0;
}