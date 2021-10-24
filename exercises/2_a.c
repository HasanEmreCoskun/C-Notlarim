/*
    Example: type casting

    Script 6.4
	2_a
*/

#include <stdio.h>


int main()
{
	double a,b;
	int c,d,e;

	b=5;
	c=5; d=3;

	//int = int/int
	e=c/d;

    printf("e = %d\n", e);

	//double = int/int
	a=c/d;

    printf("a = %lf\n", a);

	//double = double/int
	a=b/d;

    printf("a = %lf\n", a);

}
