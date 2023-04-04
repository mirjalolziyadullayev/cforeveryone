/*
 * Fundamental Types Declaration and Assingment
 * by Person and professor Ira Pohl
 * Apr 4, 2023
 */

#include<stdio.h>

int main()
{
	int a = 5, b = 7, c = 6; //daclare and initialize
	double average = 0.0; // good practice
	
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	average = (a + b + c) / 3.0; //conversion if 3
	printf("average = %lf\n", average);
	return 0;
}
