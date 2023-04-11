/*
 * Logical operators and short circuit evaluation
 * by Person and professor Ira Pohl
 * Apr 10, 2023
 */

#include<stdio.h>

int main()
{
        int 
                outside,
                weather;

        printf("\nEnter if outside 1 true 0 false:");
        scanf("%d", &outside);

        printf("\nEnter if rain 1 true 0 false:");
        scanf("%d", &weather);

        if (outside && weather)
                printf("\nPlease take an umbrella.\n");
        else
                printf("\nDress normally.\n\n");
        return 0;
}
