/*
 * Use of Simple arrays
 * by Person and professor Ira Pohl
 * May 9, 2023
 */

#include<stdio.h>
#define SIZE 5

int main(void)
{
        int grades[SIZE]= {78, 67, 92, 83, 88};
        double sum = 0.0;
        int i;

        printf("\n My grades are: \n");

        for (i = 0; i < SIZE; i++)
                printf("%d\t", grades[i]);

        printf("\n\n");

        for (i = 0; i < SIZE; i++)
                sum += grades[i];
                /* or
                sum = sum + grades[i];
                */

        printf("My average is %.2f\n\n", sum/SIZE);

        return 0;
}
