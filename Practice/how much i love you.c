/*
 * How Much I Love You (while)
 * by Person and professor Ira Pohl
 * Apr 15, 2023
 */

#include<stdio.h>

int main(void) 
{
        int repeat = 0;

        printf("How Much you love 1-10? :");
        scanf("%d", &repeat);

        printf("\nI love you very");

        while (repeat > 0)
        {
                printf("\n very");
                repeat--;
        };

        printf(" much.\n\n");

        return 0;
}
