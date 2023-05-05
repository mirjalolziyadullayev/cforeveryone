/*
Simple recursion
by Person
May 5, 2023
*/

#include<stdio.h>

void count_down(int n)
{
    while ((n > 0))
    {
        printf("time is %d\n", n);
        n--;
    }
    printf("Blast Off \n");
}

//or

void recursive_count_down(int n)
{
    if (n == 0)
        printf("Blast Off\n");
    else 
    {
        printf("time is %d\n", n);
        recursive_count_down(n - 1);
    }
}
