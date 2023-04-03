/*
 * Expression Evaluation
 * by Person and professor Ira Pohl
 * Apr 3, 2023
 */

#include<stdio.h>

int main() 
{
        int a = 5, b = 7, c = 0, d = 0; // initialize
        c = a - b;
        printf("a = %d, b = %d, c = %d, d = %d\n",
                        a, b, c, d);
        c = b - a;
        printf("a = %d, b = %d, c = %d, d = %d\n",
                        a, b, c, d);
        c = a / b ; d = b / a;
        printf("a = %d, b = %d, c = %d, D = %d\n",
                        a, b, c, d);
        c = a % b ; d = b % a;
        printf("a = %d, b = %d, c = %d, d = %d\n",
                        a, b, c, d);
        c = -a - b ; d = -b - a;
        printf("a = %d, b = %d, c = %d, d = %d\n",
                        a, b, c, d);
        c = ++a + b++ ; d += 5;
        printf("a = %d, b = %d, c = %d, d = %d\n",
                        a, b, c, d);
        return 0;
}
