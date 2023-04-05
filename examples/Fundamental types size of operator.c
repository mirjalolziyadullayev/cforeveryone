/*
 * Fundamental Types sizeof operator
 * by Person and professor Ira Pohl
 * Apr 4, 2023
 */

#include<stdio.h>
int main()
{
        int a = 5, b = 7, c = 6; // declare and initialize
        double average = 0.0; // good practice
        char ch = 'e';

        printf("on my system\n");
        printf("int is %lu bytes.\n", sizeof(int));
        printf("long int is %lu bytes.\n", sizeof(long int));
        printf("char is %lu bytes.\n", sizeof(ch));
        printf("float is %lu bytes.\n", sizeof(float));
        printf("double  is %lu bytes.\n", sizeof(double));
        printf("long double is %lu bytes.\n", sizeof(long double));
        return 0;
}
