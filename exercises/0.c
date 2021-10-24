#include <stdio.h>


/* Program to compute moment of intertia of a
rectangle
Example 0
*/
int main()
{
// Declaration of variables
	float breite, hoehe;
	float iy;

	// Input
	printf("Please enter width: ");
	scanf("%f", &breite);
	printf("Please enter height: ");
	scanf("%f", &hoehe);

	// Computation
	iy = breite * hoehe * hoehe * hoehe;
	iy = iy / 12;



	// Output
	printf("Calculation of moment of inertia Iy\n");
	printf("width = %f\n", breite);
	printf("height = %f\n", hoehe);
	printf("moment of inertia = %f\n", iy);

}
