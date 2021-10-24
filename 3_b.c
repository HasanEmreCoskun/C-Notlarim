/*
	Example: logical expressions
	- relational operators -
	Script 6.4.2
	3_b
*/

#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[])
{
    double x, y, eps, abs;
	int result;

	// example A
	x = .1;
	y = .2;
	eps = .01;
	abs=fabs(x-y);     // abs = 0.1
	result = abs < eps;

    printf("result = %d\n", result);

	// example B
	x = .1;
	y = .099;
	eps = .01;
	abs=fabs(x-y);     // abs = 0.001
	result = abs < eps;

    printf("result = %d\n", result);

}
