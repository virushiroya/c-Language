/* print A-a......Z-z */

#include<stdio.h>

int main()
{
  char a;

         for(a=65; a<=90; a++)
	{
		printf("%c = %c\t",a, a+32);
	}

	return 0;
}

/*

A = a   B = b   C = c   D = d   E = e   F = f   G = g   H = h   I = i   J = j   K = k   L = l   M = m   N = n   O = o   P = p   Q = q   R = r   S = s   T = t   U = u   V = v       W = w   X = x   Y = y   Z = z

*/