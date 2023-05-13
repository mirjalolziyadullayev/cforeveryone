/*
 * Use of Simple arrays as parameters
 * Sorting Bubble Sort
 * Display each loop
 * Easy but inefficient
 * by Person and professor Ira Pohl
 * May 13, 2023
 */

#include<stdio.h>
#define SIZE 5

void swap (int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}

void print_array (
                int how_many,
                int data[],
                char *str)
{
        int i;
        printf("%s", str);

        for (i = 0; i < how_many; i ++)
                printf("%d\t", data[i]);
}

void bubble (int data[], int how_many)
{
        int i, j;
        int go_on;

        for (i = 0; i < how_many; i++)
        {
                print_array (how_many, data, "\ninside bubble\n");

                printf("i = %d, \ninput any int to continue:", i);
                scanf("%d", &go_on);

                for (j = how_many - 1; j > i; j--)
                        if (data[j-1] > data[j])
                                swap (&data[j - 1], &data[j]);
        }
}

int main () 
{
        int grades[SIZE] = {78, 67, 92, 83, 88};

        print_array(SIZE, grades, "My grades\n");
        printf("\n\n");
        bubble (grades, SIZE);
        print_array (SIZE, grades, "My sorted grades\n");
        printf("\n\n");
        return 0;
}
