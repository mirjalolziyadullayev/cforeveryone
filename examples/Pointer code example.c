/*
 * Use of Pointers
 * by Person and professor Ira Pohl
 * May 10, 2023
 */

#include<stdio.h>
#define SIZE 5

int main(void)
{
        int grades[SIZE]= {78, 67, 92, 83, 88};
        double sum = 0.0;
        double *ptr_to_sum = &sum;
        int i;

        printf("\n My grades are: \n");

        for (i = 0; i < SIZE; i++)
                printf("%d\t", grades[i]);
                
        printf("\n\n");

        for (i = 0; i < SIZE; i++)
                sum += grades[i];
        
        printf("My average is %.2f\n\n", sum/SIZE);
        
        printf("\n\n");
  
        printf("sum is at %p, or %lu and is %lf\n",
              ptr_to_sum,
              ptr_to_sum,
              *ptr_to_sum);
              
        printf("grades are at %lu to %lu\n", 
               grades,
               grades + 5);
               
        return 0;
}
