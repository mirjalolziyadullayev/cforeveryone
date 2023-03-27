/*
 *The distance of a marathon in kilometers
 *by Person and Professor Ira Pohl
 *from University of California, Santa Cruz
 *March 27, 2023
 */

#include<stdio.h>

int main (void)
{
	int miles = 26, yards = 285;
	double kilometers;

	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %lf kilometers.\n\n", kilometers);
	return 0;
}
