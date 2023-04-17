/*
 * Count blanks, digits, and total characters
 * demonstrate loop with for statement
 * by Person and professor Ira Pohl
 * Apt 17, 2023
 */

#include<stdio.h>

int main()
{
        int blanks = 0, digits= 0, total_chars = 0;
        
        int c; // use for int value of character

        for (; (c = getchar()) != EOF; total_chars++ )
        {
            if (c == ' ')
                    ++blanks;

            else if ( c >= '0' && c <= '9')
                    ++digits;
        };

        printf(" blanks = %d, digits = %d, total_chars = %d\n\n",
                    blanks, digits, total_chars);
        return 0;
};
