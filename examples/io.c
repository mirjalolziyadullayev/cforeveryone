/*
 *Input and Output example
 *by Person and Professor Ira Pohl
 *from University of California, Santa Cruz
 *March 27, 2023
 */
#include<stdio.h>
#define PI 3.14159

int main () 
{
	double area = 0.0, radius = 0.0;
	printf("Enter Radius bro: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("radius of %lf meters; area is %lf sq, meters\n", radius, area);
	return 0;
}
