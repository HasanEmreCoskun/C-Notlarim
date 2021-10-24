/*
	Example: short notation of assignments
	Script 6.4.1
	2_d
*/

#include <stdio.h>


int main()
{
    int i=0;
	double d=2;

	// increment
	i=i+1;		//i=1
	i+=2;		//i=3	(i=i+2);
	i++;		//i=4

	// decrement
	i=i-1;		//i=3
	i-=2;		//i=1	(i=i-2)
	i--;		//i=0

	// multiplication
	d=d*2;		//d=4.0
	d*=3;		//d=12.0

}
