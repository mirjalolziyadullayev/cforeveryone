/*
 * Char in c
 * by Person and professor Ira Pohl
 * Apr 6, 2023
 */

#include<stdio.h>

int main()
{
        char c = 'a';
        printf("c in ASCII is %d\n", c);
        printf("c the charchater %c\n", c);
        printf("Three consecutive chars are : %c%c%c \n", c, c+1, c+2);
        printf("Three bell rings chars are : %c%c%c \n", '\a', '\a', '\a');
        return 0;
}
