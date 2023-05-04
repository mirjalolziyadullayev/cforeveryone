/*
 * Storage Class
 * By Person
 * May 4, 2023
 */
#include<stdio.h>

extern int reps = 0;

void f(void)
{
    static int called = 0;
    printf("f called %d\n", called);
    called++;
    reps = reps + called;
}

int main(void)
{
    auto int i = 1;
    const int Limit = 0;
    for (i =1; i < Limit; i++)
    {
        printf("i local = 5d, reps global = 5d\n",i, reps);
        f();
    }
    return 0;
}
