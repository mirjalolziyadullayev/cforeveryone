/*
 * Use of Simple arrays as parameters
 * Sally Coder
 * May 11, 2023
 */

#include<stdio.h>
#define SIZE 5

double average_grades(int how_many, int grades[])
{
        int i;
        double sum = 0.0;

        for (i = 0; i < how_many; i++)
                sum += grades[i];
        return (sum/how_many);
}

void print_grades(int how_many, int grades[])
{
        int i;

        printf("I have %d grades\n", how_many);

        for (i = 0; i < how_many; i++)
                printf("%d\t", grades[i]);
}

int main()
{
        int grades[SIZE] = {78, 67, 92, 83, 88};

        print_grades(SIZE, grades);
        printf("\n\n");
        printf("my average is %.2f\n\n",
                        average_grades(SIZE, grades));

        return 0;
}
