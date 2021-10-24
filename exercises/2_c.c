/*
	Example: assignment of values
    Script 6.4.1
	2_c
*/

#include <stdio.h>


int main()
{
    double a;
	int b;
	int c;

	b = 2;
	c = 3.76;  // in gcc compiler initializing c as int with 3.76 (non-integer) returns error.

	a = b/c;

	printf("\n a = %lf \n",a);

}
